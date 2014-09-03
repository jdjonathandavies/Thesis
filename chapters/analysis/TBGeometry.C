{
//=========Macro generated from canvas: can/can
//=========  (Wed Sep  3 12:17:44 2014) by ROOT version5.34/05
   TCanvas *can = new TCanvas("can", "can",0,22,550,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   can->Range(-257.1429,-126,257.1429,114);
   can->SetFillColor(0);
   can->SetBorderMode(0);
   can->SetBorderSize(0);
   can->SetTickx(1);
   can->SetTicky(1);
   can->SetLeftMargin(0.15);
   can->SetRightMargin(0.15);
   can->SetBottomMargin(0.15);
   can->SetFrameBorderMode(0);
   can->SetFrameBorderSize(0);
   can->SetFrameBorderMode(0);
   can->SetFrameBorderSize(0);
   
   TH2F *histMap = new TH2F("histMap","Locations In TestBed Coordinate System",360,-180,180,180,-90,90);
   histMap->SetLineWidth(2);
   histMap->SetMarkerColor(9);
   histMap->SetMarkerStyle(29);
   histMap->GetXaxis()->SetTitle("Azimuth (#circ)");
   histMap->GetXaxis()->SetLabelSize(0.025);
   histMap->GetXaxis()->SetTitleSize(0.045);
   histMap->GetXaxis()->SetTitleOffset(1.2);
   histMap->GetYaxis()->SetTitle("Elevation (#circ)");
   histMap->GetYaxis()->SetLabelSize(0.025);
   histMap->GetYaxis()->SetTitleSize(0.045);
   histMap->GetYaxis()->SetTitleOffset(1.4);
   histMap->GetZaxis()->SetLabelSize(0.025);
   histMap->GetZaxis()->SetTitleSize(0.045);
   histMap->Draw("");
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("grMulti");
   multigraph->SetTitle("Locations In TestBed Coordinate System");
   
   TGraph *graph = new TGraph(4);
   graph->SetName("grCPs");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(33);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,139.2434934,13.85162904);
   graph->SetPoint(1,139.2386426,5.085370426);
   graph->SetPoint(2,-96.54474797,-18.14428837);
   graph->SetPoint(3,-96.54881448,-8.173442278);
   
   TH1F *Graph_grCPs1 = new TH1F("Graph_grCPs1","Graph",100,-120.128,162.8227);
   Graph_grCPs1->SetMinimum(-90);
   Graph_grCPs1->SetMaximum(90);
   Graph_grCPs1->SetDirectory(0);
   Graph_grCPs1->SetStats(0);
   Graph_grCPs1->SetLineWidth(2);
   Graph_grCPs1->SetMarkerColor(9);
   Graph_grCPs1->SetMarkerStyle(29);
   Graph_grCPs1->GetXaxis()->SetRange(0,101);
   Graph_grCPs1->GetXaxis()->SetLabelSize(0.025);
   Graph_grCPs1->GetXaxis()->SetTitleSize(0.045);
   Graph_grCPs1->GetXaxis()->SetTitleOffset(1.2);
   Graph_grCPs1->GetYaxis()->SetLabelSize(0.025);
   Graph_grCPs1->GetYaxis()->SetTitleSize(0.045);
   Graph_grCPs1->GetYaxis()->SetTitleOffset(1.4);
   Graph_grCPs1->GetZaxis()->SetLabelSize(0.025);
   Graph_grCPs1->GetZaxis()->SetTitleSize(0.045);
   graph->SetHistogram(Graph_grCPs1);
   
   multigraph->Add(graph,"p");
   
   graph = new TGraph(1);
   graph->SetName("grSPS");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ffff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,-142.4560443,-0.0678067211);
   
   TH1F *Graph_grSPS2 = new TH1F("Graph_grSPS2","Graph",100,-142.556,-141.356);
   Graph_grSPS2->SetMinimum(-90);
   Graph_grSPS2->SetMaximum(90);
   Graph_grSPS2->SetDirectory(0);
   Graph_grSPS2->SetStats(0);
   Graph_grSPS2->SetLineWidth(2);
   Graph_grSPS2->SetMarkerColor(9);
   Graph_grSPS2->SetMarkerStyle(29);
   Graph_grSPS2->GetXaxis()->SetRange(0,101);
   Graph_grSPS2->GetXaxis()->SetLabelSize(0.025);
   Graph_grSPS2->GetXaxis()->SetTitleSize(0.045);
   Graph_grSPS2->GetXaxis()->SetTitleOffset(1.2);
   Graph_grSPS2->GetYaxis()->SetLabelSize(0.025);
   Graph_grSPS2->GetYaxis()->SetTitleSize(0.045);
   Graph_grSPS2->GetYaxis()->SetTitleOffset(1.4);
   Graph_grSPS2->GetZaxis()->SetLabelSize(0.025);
   Graph_grSPS2->GetZaxis()->SetTitleSize(0.045);
   graph->SetHistogram(Graph_grSPS2);
   
   multigraph->Add(graph,"p");
   
   graph = new TGraph(1);
   graph->SetName("grSPT");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ffcc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,-129.2872786,-0.04094214913);
   
   TH1F *Graph_grSPT3 = new TH1F("Graph_grSPT3","Graph",100,-129.3873,-128.1873);
   Graph_grSPT3->SetMinimum(-90);
   Graph_grSPT3->SetMaximum(90);
   Graph_grSPT3->SetDirectory(0);
   Graph_grSPT3->SetStats(0);
   Graph_grSPT3->SetLineWidth(2);
   Graph_grSPT3->SetMarkerColor(9);
   Graph_grSPT3->SetMarkerStyle(29);
   Graph_grSPT3->GetXaxis()->SetRange(0,101);
   Graph_grSPT3->GetXaxis()->SetLabelSize(0.025);
   Graph_grSPT3->GetXaxis()->SetTitleSize(0.045);
   Graph_grSPT3->GetXaxis()->SetTitleOffset(1.2);
   Graph_grSPT3->GetYaxis()->SetLabelSize(0.025);
   Graph_grSPT3->GetYaxis()->SetTitleSize(0.045);
   Graph_grSPT3->GetYaxis()->SetTitleOffset(1.4);
   Graph_grSPT3->GetZaxis()->SetLabelSize(0.025);
   Graph_grSPT3->GetZaxis()->SetTitleSize(0.045);
   graph->SetHistogram(Graph_grSPT3);
   
   multigraph->Add(graph,"p");
   
   graph = new TGraph(4);
   graph->SetName("grICL");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00ffff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,-136.5174106,0.1973382676);
   graph->SetPoint(1,-136.61668,0.1958889495);
   graph->SetPoint(2,-136.8438608,0.1958547975);
   graph->SetPoint(3,-136.7462837,0.1973061488);
   
   TH1F *Graph_grICL4 = new TH1F("Graph_grICL4","Graph",100,-136.8765,-136.4848);
   Graph_grICL4->SetMinimum(-90);
   Graph_grICL4->SetMaximum(90);
   Graph_grICL4->SetDirectory(0);
   Graph_grICL4->SetStats(0);
   Graph_grICL4->SetLineWidth(2);
   Graph_grICL4->SetMarkerColor(9);
   Graph_grICL4->SetMarkerStyle(29);
   Graph_grICL4->GetXaxis()->SetRange(0,101);
   Graph_grICL4->GetXaxis()->SetLabelSize(0.025);
   Graph_grICL4->GetXaxis()->SetTitleSize(0.045);
   Graph_grICL4->GetXaxis()->SetTitleOffset(1.2);
   Graph_grICL4->GetYaxis()->SetLabelSize(0.025);
   Graph_grICL4->GetYaxis()->SetTitleSize(0.045);
   Graph_grICL4->GetYaxis()->SetTitleOffset(1.4);
   Graph_grICL4->GetZaxis()->SetLabelSize(0.025);
   Graph_grICL4->GetZaxis()->SetTitleSize(0.045);
   graph->SetHistogram(Graph_grICL4);
   
   multigraph->Add(graph,"p");
   
   graph = new TGraph(1);
   graph->SetName("grWT");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,168.40124,0.3443278002);
   
   TH1F *Graph_grWT5 = new TH1F("Graph_grWT5","Graph",100,168.3012,169.5012);
   Graph_grWT5->SetMinimum(-90);
   Graph_grWT5->SetMaximum(90);
   Graph_grWT5->SetDirectory(0);
   Graph_grWT5->SetStats(0);
   Graph_grWT5->SetLineWidth(2);
   Graph_grWT5->SetMarkerColor(9);
   Graph_grWT5->SetMarkerStyle(29);
   Graph_grWT5->GetXaxis()->SetRange(0,101);
   Graph_grWT5->GetXaxis()->SetLabelSize(0.025);
   Graph_grWT5->GetXaxis()->SetTitleSize(0.045);
   Graph_grWT5->GetXaxis()->SetTitleOffset(1.2);
   Graph_grWT5->GetYaxis()->SetLabelSize(0.025);
   Graph_grWT5->GetYaxis()->SetTitleSize(0.045);
   Graph_grWT5->GetYaxis()->SetTitleOffset(1.4);
   Graph_grWT5->GetZaxis()->SetLabelSize(0.025);
   Graph_grWT5->GetZaxis()->SetTitleSize(0.045);
   graph->SetHistogram(Graph_grWT5);
   
   multigraph->Add(graph,"p");
   multigraph->Draw("P");
   TBox *box = new TBox(-180,40,180,90);
   box->SetFillColor(1);
   box->SetFillStyle(3004);
   box->Draw();
   box = new TBox(-150,-90,-100,40);
   box->SetFillColor(1);
   box->SetFillStyle(3004);
   box->Draw();
   box = new TBox(-100,-90,-92,40);
   box->SetFillColor(1);
   box->SetFillStyle(3004);
   box->Draw();
   box = new TBox(134,-90,144,40);
   box->SetFillColor(1);
   box->SetFillStyle(3004);
   box->Draw();
   box = new TBox(163,-90,173,40);
   box->SetFillColor(1);
   box->SetFillStyle(3004);
   box->Draw();
   
   TLegend *leg = new TLegend(0.3589744,0.2692308,0.7307692,0.6118881,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("grCPs","CalPulsers","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(2);
   entry=leg->AddEntry("grSPS","South Pole Station","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry=leg->AddEntry("grSPT","South Pole Telescope","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry=leg->AddEntry("grICL","IceCube","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry=leg->AddEntry("grWT","Wind Turbine","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry=leg->AddEntry("hMaskedOffDirections","Masked Directions","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3004);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.92,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   TText *text = pt->AddText("Locations In TestBed Coordinate System");
   pt->Draw();
   can->Modified();
   can->cd();
   can->SetSelected(can);
}
