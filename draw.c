TGraph* scan(string name){
  cout<<name<<endl;


  ifstream ifs(name);
  
  auto g1 = new TGraphErrors();
  double t,f,s=0;
  int index;
  while(ifs>>t>>f>>s){
    g1->SetPoint(index,s,f);
    g1->SetPointError(index,0,0);
    index++;
  }
  
  return g1;

}






int draw(){


  auto c1 = new TCanvas("c1","multigraph",700,500);
  
  c1->Divide(2,2);
  c1->cd(1);
  auto mg1=new TMultiGraph();
  auto mg2=new TMultiGraph();
  auto mg3=new TMultiGraph();
  auto mg4=new TMultiGraph();

  vector<TGraph*> Graphs;
  for(int i=1;i<17;i++){

    Graphs.push_back(scan("../data/Test"+ to_string(i) + ".txt"));

  }
  
  auto g1=scan("../data/Test1.txt");
  auto g2=scan("../data/Test2.txt");
  auto g3=scan("../data/Test3.txt");
  auto g4=scan("../data/Test4.txt");
  auto g5=scan("../data/Test5.txt");
  auto g6=scan("../data/Test6.txt");
  auto g7=scan("../data/Test7.txt");
  auto g8=scan("../data/Test8.txt");
  auto g9=scan("../data/Test9.txt");
  auto g10=scan("../data/Test10.txt");
  auto g11=scan("../data/Test11.txt");
  auto g12=scan("../data/Test12.txt");
  auto g13=scan("../data/Test13.txt");
  auto g14=scan("../data/Test14.txt");
  auto g15=scan("../data/Test15.txt");
  auto g16=scan("../data/Test16.txt");
 
  


  g1->SetMarkerColor(kBlack);
  g2->SetMarkerColor(kRed);
  g3->SetMarkerColor(kBlue);
  g4->SetMarkerColor(kGreen);
  g5->SetMarkerColor(kOrange);
  g6->SetMarkerColor(kViolet);
  g7->SetMarkerColor(kGray);
  g8->SetMarkerColor(kYellow+1);
  g9->SetMarkerColor(kCyan);
  g10->SetMarkerColor(kGreen+4);
  g11->SetMarkerColor(kBlue+4);
  g12->SetMarkerColor(kCyan+1);
  g13->SetMarkerColor(kOrange+10);
  g14->SetMarkerColor(kBlack+3);
  g15->SetMarkerColor(kPink-9);
  g16->SetMarkerColor(kCyan-10);
  


  g1->SetLineColor(kBlack);
  g2->SetLineColor(kRed);
  g3->SetLineColor(kBlue);
  g4->SetLineColor(kGreen);
  g5->SetLineColor(kOrange);
  g6->SetLineColor(kViolet);
  g7->SetLineColor(kGray);
  g8->SetLineColor(kYellow+1);
  g9->SetLineColor(kCyan);
  g10->SetLineColor(kGreen+4);
  g11->SetLineColor(kBlue+4);
  g12->SetLineColor(kCyan+1);
  g13->SetLineColor(kOrange+10);
  g14->SetLineColor(kBlack+3);
  g15->SetLineColor(kPink-9);
  g16->SetLineColor(kCyan-10);
  




  
  g1->SetMarkerStyle(20);
  g2->SetMarkerStyle(21);
  g3->SetMarkerStyle(22);
  g4->SetMarkerStyle(23);
  g5->SetMarkerStyle(27);
  g6->SetMarkerStyle(28);
  g7->SetMarkerStyle(29);
  g8->SetMarkerStyle(2);
  g9->SetMarkerStyle(3);
  g10->SetMarkerStyle(5);
  g11->SetMarkerStyle(40);
  g12->SetMarkerStyle(42);
  g13->SetMarkerStyle(44);
  g14->SetMarkerStyle(46);
  g15->SetMarkerStyle(48);
  g16->SetMarkerStyle(49);
 







  

  mg1->Add(g1);
  mg1->Add(g2);
  mg1->Add(g3);
  mg1->Add(g4);
  mg1->Draw("AL");

  c1->cd(2);
  mg2->Add(g5);
  mg2->Add(g6);
  mg2->Add(g7);
  mg2->Add(g8);
  mg2->Draw("AL");

   c1->cd(3);
    


  mg3->Add(g9);
  mg3->Add(g10);
  mg3->Add(g11);
  mg3->Add(g12);
 mg3->Draw("AL");

  c1->cd(4);
  mg4->Add(g13);
  mg4->Add(g14);
  mg4->Add(g15);
  mg4->Add(g16);
 mg4->Draw("AL");




 

 auto c2 = new TCanvas("c2","name",700,500);

 for(int i=0;i<Graphs.size();i++){
 Graphs[i]->Draw("AL");
 }



  /*

  TLegend *leg = new TLegend(0.7, 0.3, 0.9, 0.75);

leg->AddEntry(g1,"No1","P");
leg->AddEntry(g2,"No2","P");

leg->AddEntry(g3,"No3","P");
leg->AddEntry(g4,"No4","P");
leg->AddEntry(g5,"No5","P");
leg->AddEntry(g6,"No6","P");

leg->AddEntry(g7,"No7","P");
leg->AddEntry(g8,"No8","P");
leg->AddEntry(g9,"No9","P");

leg->AddEntry(g10,"No10","P");
leg->AddEntry(g11,"No11","P");
leg->AddEntry(g12,"No12","P");

leg->AddEntry(g13,"No13","P");
 leg->AddEntry(g14,"No14","P");
leg->AddEntry(g15,"No15","P");
leg->AddEntry(g16,"No16","P");


leg -> Draw();

  */


  return 0;
}
