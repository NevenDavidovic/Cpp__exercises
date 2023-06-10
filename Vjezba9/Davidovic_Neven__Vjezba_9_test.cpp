// MD5:L8dlztWdpnXKHyluSrrHfQ==
// Verifikator 5.08
// Program:Vjezba 9
// Opis zadatka:zad2
// Autor:Neven  Davidovic
// Procesi:slack Verifikator servicehost sihost services RtkAudUService64 svchost asus_framework RuntimeBroker AsusCertService GoogleCrashHandler64 chrome MpCopyAccelerator SolarWinds.Alerting.Service ApplicationFrameHost Code conhost msedge audiodg uihost DAX3API OrthancService SolarWinds.ServiceHost.Process FoxitPDFReaderUpdateService csrss wininit SolarWinds.InformationService.ServiceV3 NetFlowService StartMenuExperienceHost AsusOptimization wlanext GameSDK spoolsv SolarWinds.SEUM.Agent.Service atieclxx WUDFHost CodeSetup-stable-252e5463d60e63238250799aef7375787f68b4ee backgroundTaskHost Video.UI Teams ctfmon AsusSystemAnalysis ArmouryCrate.DenoiseAI AsusSystemDiagnosis CodeSetup-stable-252e5463d60e63238250799aef7375787f68b4ee.tmp dllhost SolarWinds.SEUM.AgentProxy.Service GameBarFTServer Cortana ROGLiveService AsusSwitch AsusSoftwareManager AcPowerNotification SecurityHealthService WmiApSrv WmiPrvSE AsusLinkRemote taskhostw Orthanc AsusLinkNear AsusAppService SearchApp NVDisplay.Container ArmouryCrate.Service ArmouryCrate.UserSessionHelper GameBar dwm MsMpEng ArmouryCrateControlInterface WhatsApp Registry fontdrvhost UserOOBEBroker OfficeClickToRun browserhost Memory Compression SolarWinds TFTP Server LockApp cmd ShellExperienceHost SearchIndexer smss SMSvcHost atiesrxx SolarWinds.HighAvailability.Service GoogleCrashHandler LsaIso TextInputHost unsecapp winlogon Secure System ArmourySwAgent SecurityHealthSystray mysqld SystemSettings CompPkgSrv SgrmBroker sqlwriter LightingService ArmourySocketServer ACCIMonitor OneDrive AsusOptimizationStartupTask com.docker.service NisSrv lsass explorer SolarWinds.BusinessLayerHost Microsoft.Photos AsusSoftwareManagerAgent Idle 
// Pocetno vrijeme:4.5.2023. 19:39:08
// Završno vrijeme:4.5.2023. 20:21:07
// Identifikatori:Pravokutnik,duljina,sirina,Kocka,mjera,main,Kvadar,mjeraa,duljina_,sirina_,baza_,stranica_,class,const,&baza,double,Duzina,duzina,d,Cetverokut,public,a,b,opseg,povrsina,Kvadrat,prav,prav,k,povrsina
// IP:fe80::ea95:7ebe:8146:672%7 ( 2712 )
// #:#include <iostream>,
// Uspješnih/neuspješnih prevodenja:15/15
#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
void TEST(int i){fstream dat;dat.clear(); 
  static int br_reda[]={0,5,8,14,15,16,22,23,24,29}; 
  static int p[]={0,0,0,0,0,0,0,0,0,0}; 
  static int suma=0;static int zag=0;static int zaglavlje=0;static int br=0;p[i]++;suma++;int f,s=0;char c;
  for (f=1;f<=9;f++)s=s+p[f];if (s!=suma){cout<<"Neispravna suma brojaca. Poziv: TEST("<<i<<")"<<endl;cin>>c;return;} 
  zag=(int)time(0);if (zag==zaglavlje){br++;if ((br>1)&&(p[i]>1))return;} else br=0;zaglavlje = (int)time(0);
  dat.open("testiranje.txt",ios::out);
  dat << zaglavlje << endl <<"Rezultati testiranja (test N = 9):" << endl; 
  for (f=1;f<=9;f++){dat << f << char(91) << br_reda[f] << char(93) << char(58) << p[f] << endl;} 
  dat.close();dat.clear(); 
}; 
 #include <iostream>
using namespace std;

class Duzina{ public: double duzina;
Duzina (double d=0): duzina (d){TEST(1);}};

class Cetverokut{
public: Cetverokut(){TEST(2);}
};

class Pravokutnik: protected Cetverokut{
public:
Duzina a,b;
Pravokutnik(double a=0, double b=0) : a(a), b(b){TEST(3);}
double opseg(){TEST(4);return 2*(a.duzina+b.duzina);}
double povrsina(){TEST(5);return a.duzina * b.duzina;}
};

class Kvadrat: private Cetverokut{
public:
Duzina a;
Kvadrat (double a=0): a(a){TEST(6);}
double opseg(){TEST(7);return 4*a.duzina *a.duzina;}
double povrsina(){TEST(8);return a.duzina * a.duzina;}
};


//###########################
int main(){TEST(9);
Pravokutnik prav(6,7);

cout<<prav.opseg()<<endl;
cout<<prav.povrsina()<<endl;

Kvadrat k(7);
cout<<k.opseg()<<endl;
cout<<k.povrsina()<<endl;
system("PAUSE");
}  
// Postoci testiranja:  0%
// H1:233341323100000103102000110000122332311
// H2:665663565500006636456200120000667777665
// H3:000000000000000000000000000000000000000
// H4:000000000000000000000000000000000000000
// test:0 TEST:0 bez promjena:0 Copy/Paste:1 Upozorenja na intervale testiranja:2
