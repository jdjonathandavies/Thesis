%% uclthesis
%%   LaTeX class for writing UCL PhD theses, particularly those for
%%   high energy physics (HEP)
%% Author: James Robinson <james.robinson@cern.ch>
%%   based on hepthesis by Andy Buckley <andy@insectnation.org>

%% -------------------------------------
%% Admin
%% -------------------------------------
\def\fileversion{1.0}
\def\filedate{2011/09/28}
\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{uclthesis}[\filedate\space UCL Thesis class by James Robinson (v\fileversion)]

%% -------------------------------------
%% Option parsing
%% -------------------------------------
\def\@makeDraft{yes}
\def\@makeFinal{}
\def\@makeWeb{}

\DeclareOption{draft}{%
  \def\@makeDraft{yes}%
  \def\@makeFinal{}%
  \def\@makeWeb{}}%
\DeclareOption{final}{%
  \def\@makeDraft{}%
  \def\@makeFinal{yes}%
  \def\@makeWeb{}}%
\DeclareOption{web}{%
  \def\@makeDraft{}%
  \def\@makeFinal{}%
  \def\@makeWeb{yes}}%
\DeclareOption*{%
  \PassOptionsToClass{\CurrentOption}{hepthesis}%
}

%% Process the options (no package requirement allowed above here)
\ProcessOptions

%% For a normal draft build we want linenumbers and no images
\ifx\@makeDraft\@empty\else%
  \PassOptionsToClass{hyperpdf,bind,oneside,draft}{hepthesis}
  %% Prefer running line numbers rather than per-page ones
  \PassOptionsToPackage{running}{lineno}%
\fi

%% For final UCL build we want bind, oneside
\ifx\@makeFinal\@empty\else%
  \PassOptionsToClass{bind,oneside}{hepthesis}%
  %% Need to define texorpdfstring
  \providecommand{\texorpdfstring}[2]{#1}%
\fi

%% For websafe build we want hyperref and centred
\ifx\@makeWeb\@empty\else%
  \PassOptionsToClass{hyperpdf,oneside}{hepthesis}%
\fi

%% Load base class (options already passed)
\LoadClass{hepthesis}


%% -------------------------------------
%% Standard packages
%% -------------------------------------
\RequirePackage{cite}
\RequirePackage{afterpage}

%% Script font
\RequirePackage{mathrsfs} 

%% For Feynman diagrams
\RequirePackage{feynmf}

%%% Using Babel allows other languages to be used and mixed-in easily
\RequirePackage[ngerman,english]{babel}
\RequirePackage[T1]{fontenc}
\selectlanguage{english}

%% Subfigures - note subfig is incompatible with ccaption
\RequirePackage[lofdepth,lotdepth]{subfig}

%% To allow eps with pdflatex
\RequirePackage[verbose]{epspdfconversion}

%% To allow inclusion of graphics with odd characters (eg. ".") in their name
\RequirePackage{grffile}

%% Set UCL determined page sizes
\ifx\@makeWeb\@empty
  \RequirePackage[includeheadfoot,left=40mm,right=20mm,top=20mm,bottom=20mm]{geometry}
\else%
  \RequirePackage[includeheadfoot,left=30mm,right=30mm,top=20mm,bottom=20mm]{geometry}
\fi


%% Prevent footnotes from indenting
\RequirePackage[hang,flushmargin]{footmisc} 

%% Allow footnotes in tables
\RequirePackage{footnote}

%% To allow typesetting of URLs when not using hyperref
\ifx\@makeFinal\@empty\else%
  \RequirePackage{url}
\fi

%% -------------------------------------
%% Overrides for standard hepthesis styles
%% -------------------------------------

%% Title page changed to include date
\let\@hepthesistitlepage\titlepage
\let\@hepthesisendtitlepage\endtitlepage
\DeclareRobustCommand{\titlepage}[2][]{
  \thispagestyle{plain}%
  \begingroup%
  \ifx\@sftitles\@empty\else\sf\fi%
  \begin{center}%
    \vspace*{\frontmattertitleskip}%
    \begin{doublespace}%
      {\Huge\textbf{\thetitle}}\\%
    \end{doublespace}%
    \vspace*{3cm}%
    {\Large{{\theauthor} \\ {#1}}}\\%
    \vspace*{7cm}%
    {#2}\\%
    \vspace*{1.5cm}
    {\@date}%
  \end{center}%
  \endgroup%
}
\renewcommand{\maketitle}[1]{\titlepage{}}

%% Front matter hack to change to arabic numbering instead of default roman
\let\@hepthesisfrontmatter\frontmatter
\specialcomment{frontmatter}{%
  \setcounter{tocdepth}{2}% show down to subsections in contents
  \setcounter{secnumdepth}{2}% number down to subsections
  \newcounter{iterlist}%
  \@oldfrontmatter%
  \pagenumbering{arabic}%
  \adjustwidth{\@frontmatterextramargin}{\@frontmatterextramargin}%
  \begin{\@frontmatterspacing}%
}{%
  \end{\@frontmatterspacing}%
  \endadjustwidth%
  \ignorespacesafterend%
}

%% Set declaration, abstract, acknowledgements and prefact to plain style
\let\@hepdeclaration\declaration
\renewcommand{\declaration}{\@hepdeclaration\thispagestyle{plain}}

\let\@hepabstract\abstract
\renewcommand{\abstract}{\@hepabstract\thispagestyle{plain}}

\let\@hepacknowledgements\acknowledgements
\renewcommand{\acknowledgements}{\@hepacknowledgements\thispagestyle{plain}}

\let\@heppreface\preface
\renewcommand{\preface}{\@heppreface\thispagestyle{plain}}

%% Environment for the thesis main body
%%  - removed \pagenumbering{arabic} which resets numbering
%%  - added linenumbers if in draft mode
\let\@hepthesismainmatter\mainmatter
\specialcomment{mainmatter}{%
  \ifx\@makeDraft\@empty\else%
    \linenumbers
  \fi
  \@mainmattertrue
  \adjustwidth{\@mainmatterextramargin}{\@mainmatterextramargin}%
  \begin{\@mainmatterspacing}%
}{%
  \end{\@mainmatterspacing}%
  \endadjustwidth%
  \ignorespacesafterend%
}

%% Environment for all the junk at the end of the thesis
%%  - removing ability to set separate margins:
%%    for some reason this adds a blank page
\let\@hepthesisbackmatter\backmatter
\specialcomment{backmatter}{%
  \@oldbackmatter%
  \begin{\@backmatterspacing}%
  \appendix%
}{%
  \end{\@backmatterspacing}%
  \ignorespacesafterend%
}

%% Environment for appendices
\let\@hepthesisappendices\appendices
\specialcomment{appendices}{%
  \begin{\@appendixspacing}%
  \appendix%
}{%
  \end{\@appendixspacing}%
  \ignorespacesafterend%
}


%% Add new figure width and redefine others to fit UCL margins
\newlength{\tinyfigwidth}
\setlength{\tinyfigwidth}{0.29\textwidth}   %0.29
\setlength{\smallfigwidth}{0.46\textwidth}  %0.45
\setlength{\mediumfigwidth}{0.61\textwidth} %0.60
\setlength{\largefigwidth}{0.76\textwidth}  %0.75
\setlength{\hugefigwidth}{0.91\textwidth}   %0.90

%% Prefer capitalised equation references
\renewcommand{\Equation}{Equation}

%% Add some multi-reference commands
\DeclareRobustCommand{\TablesRef}[2]{\Table{s}~\ref{#1}~and~\ref{#2}}
\DeclareRobustCommand{\FiguresRef}[2]{\Figure{s}~\ref{#1}~and~\ref{#2}}
\DeclareRobustCommand{\EquationsRef}[2]{\Equation{s}~\eqref{#1}~and~\eqref{#2}}
\DeclareRobustCommand{\TableRangeRef}[2]{\Table{s}~\ref{#1}--\ref{#2}}
\DeclareRobustCommand{\FigureRangeRef}[2]{\Figure{s}~\ref{#1}--\ref{#2}}
\DeclareRobustCommand{\EquationRangeRef}[2]{\Equation{s}~\eqref{#1}--\eqref{#2}}

%% Use small textunderscores
\DeclareTextCommand{\_}{T1}{%
  \leavevmode \kern.02em\vbox{\hrule width.4em}%
}

% To stop siunits from stuffing up the \micro tag
\RequirePackage{textcomp}
