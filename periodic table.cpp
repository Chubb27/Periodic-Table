#include<iostream>
#include<cstring>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<windows.h>
#include<process.h>
using namespace std;
class element{
	          public:
				 short atomicno;
                 string name;
                 string symb;
                 string ec;
                 short group;
                 short period;
                 char block;
                 float atomicw;
                 float en;
                 short atomicr;
                 string origin;
                 float meltp;
                 float boilp;
                 float density;
                 element(short a=0,string b="",string c="",string d="",short e=0,short f=0,char g=' ',float h=0,float i=0,short j=0,string k="",float l=0,float m=0,float n=0)
                 {
                 	atomicno=a;
                 	name=b;
                 	symb=c;
                 	ec=d;
                 	group=e;
                 	period=f;
                 	block=g;
                 	atomicw=h;
                 	en=i;
                 	atomicr=j;
                 	origin=k;
                 	meltp=l;
                 	boilp=m;
                 	density=n;
				 }
				 void display()
                 {
	                 cout<<"                  \n\t\t\t\t\t\t  THE MODERN PERIODIC TABLE\n";
                     cout<<"\t\t\t\t\t\t  =========================\n\n";
                     cout<<"\t\t|----|                                                                               |----|\n";
	                 cout<<"\t\t| H  |                                                                               | He |\n";
	                 cout<<"\t\t|----|----|                                                 |----|----|----|----|----|----|\n";
                     cout<<"\t\t| Li | Be |                                                 | B  | C  | N  | O  | F  | Ne |\n";
	                 cout<<"\t\t|----|----|                                                 |----|----|----|----|----|----|\n";
                     cout<<"\t\t| Na | Mg |                                                 | Al | Si | P  | S  | Cl | Ar |\n";
   	                 cout<<"\t\t|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n";
                     cout<<"\t\t| K  | Ca | Sc | Ti | V  | Cr | Mn | Fe | Co | Ni | Cu | Zn | Ga | Ge | As | Se | Br | Kr |\n";
                     cout<<"\t\t|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n";
                     cout<<"\t\t| Rb | Sr | Y  | Zr | Nb | Mo | Tc | Ru | Rh | Pd | Ag | Cd | In | Sn | Sb | Te | I  | Xe |\n";
                     cout<<"\t\t|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n";
	                 cout<<"\t\t| Cs | Ba |    | Hf | Ta | W  | Re | Os | Ir | Pt | Au | Hg | Tl | Pb | Bi | Po | At | Rn |\n";
	                 cout<<"\t\t|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n";
	                 cout<<"\t\t| Fr | Ra |    | Rf | Db | Sg | Bh | Hs | Mt | Ds | Rg | Cn | Nh | Fl | Mc | Lv | Ts | Og |\n";
	                 cout<<"\t\t|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n\n";
	                 cout<<"\t\t          |----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n";
	                 cout<<"\t\t          | La | Ce | Pr | Nd | Pm | Sm | Eu | Gd | Tb | Dy | Ho | Er | Tm | Yb | Lu |\n";
	                 cout<<"\t\t          |----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n";
	                 cout<<"\t\t          | Ac | Th | Pa | U  | Np | Pu | Am | Cm | Bk | Cf | Es | Fm | Md | No | Lr |\n";
	                 cout<<"\t\t          |----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|\n\n\n";
                  }
};
class view_table : public element{
};
int main()
{
	int x;
	string Name,Symbol;
	string addname,addsymb,neworigin,addec;
	int addno,addgroup,addperiod;
	float addwt,adden,addmelt,addboil,adddensity,addradius;
	char addblock;
	system("COLOR F1");
	element elm[119]={element(),
	                   element(1,"Hydrogen","H","1s1",1,1,'s',1.008,2.2,53,"The Greek 'Hydro' and 'Genes' means Water-Forming",14.01,20.28,0.00008988),
	                   element(2,"Helium","He","1s2",18,1,'p',4.0026,0,31,"The Greek 'Helios' means Sun",0.95,4.22,0.0001785),
	                   element(3,"Lithium","Li","[He] 2s1",1,2,'s',6.94,0.98,167,"The Greek 'Lithos' means Stone",453.69,1560,0.534),
	                   element(4,"Beryllium","Be","[He] 2s2",2,2,'s',9.01218,1.57,112,"The Greek name for Beryl is 'Beryllo'",1560,2742,1.85),
	                   element(5,"Boron","B","[He] 2s2 2p1",13,2,'p',10.81,2.04,87,"The Arabic 'Buraq',which was the name for Borax",2349,4200,2.34),
	                   element(6,"Carbon","C","[He] 2s2 2p2",14,2,'p',12.011,2.55,67,"The Latin 'Carbo' means charcol",3800,4300,2.267),
	                   element(7,"Nitrogen","N","[He] 2s2 2p3",15,2,'p',14.007,3.04,56,"The Greek 'Nitron' and 'Genes' means nitro-forming",63.15,77.36,0.0012506),
	                   element(8,"Oxygen","O","[He] 2s2 2p4",16,2,'p',15.999,3.44,48,"The Greek 'Oxy' and 'Genes' means Acid-Forming",54.8,90.2,0.001429),
	                   element(9,"Fluorine","F","[He] 2s2 2p5",17,2,'p',18.998,3.98,42,"the Latin 'fluere', meaning to flow",53.55,85,0.001696),
	                   element(10,"Neon","Ne","[He] 2s2 2p6",18,2,'p',20.180,0,38,"the Greek 'neos', meaning new",24.55,27.1,0.0008999),
	                   element(11,"Sodium","Na","[Ne] 3s1",1,3,'s',22.990,0.93,190,"the English word soda",370.87,1156,0.971),
	                   element(12,"Magnesium","Mg","[Ne] 3s2",2,3,'s',24.305,1.31,145,"Magnesia, a district of Eastern Thessaly in Greece",923,1380,1.738),
	                   element(13,"Aluminium","Al","[Ne] 3s2 3p1",13,3,'p',26.982,1.61,118,"The Latin 'Alumen' meaning Bitter Salt",933.47,2740,2.698),
	                   element(14,"Silicon","Si","[Ne] 3s2 3p2",14,3,'p',28.085,1.90,111,"the Latin 'silex' or 'silicis', meaning flint",1687,2630,2.3296),
	                   element(15,"Phosphorus","P","[Ne] 3s2 3p3",15,3,'p',30.974,2.19,98,"the Greek 'phosphoros', meaning bringer of light",317.3,553,1.82),
	                   element(16,"Sulfur","S","[Ne] 3s2 3p4",16,3,'p',32.06,2.58,100,"Either from the Sanskrit 'sulvere', or the Latin 'sulfurium', both names for sulfur",392.2,717.82,2.067),
	                   element(17,"Chlorine","Cl","[Ne] 3s2 3p5",17,3,'p',35.45,3.16,79,"the Greek 'chloros', meaning greenish yellow",172.17,239.18,0.003214),
	                   element(18,"Argon","Ar","[Ne] 3s2 3p6",18,3,'p',39.948,0,71,"the Greek, 'argos', meaning idle",83.95,87.45,0.0017837),
	                   element(19,"Potassium","K","[Ar] 4s1",1,4,'s',39.098,0.82,243,"the English word potash",336.8,1033,0.862),
	                   element(20,"Calcium","Ca","[Ar] 4s2",2,4,'s',40.078,1.00,194,"the Latin 'calx' meaning lime",1112,1757,1.54),
	                   element(21,"Scandium","Sc","[Ar] 3d1 4s2",3,4,'d',44.956,1.36,184,"Scandinavia",1814,3109,2.989),
	                   element(22,"Titanium","Ti","[Ar] 3d2 4s2",4,4,'d',47.867,1.54,176,"Titans, the sons of the Earth goddess of Greek mythology",1945,3560,4.54),
	                   element(23,"Vanadium","V","[Ar] 3d3 4s2",5,4,'d',50.942,1.63,171,"Vanadis, an old Norse name for the Scandinavian goddess Freyja",2163,3650,6.11),
	                   element(24,"Chromium","Cr","[Ar] 3d4 4s2",6,4,'d',51.996,1.66,166,"the Greek 'chroma', meaning colour",2130,2945,7.15),
	                   element(25,"Manganese","Mn","[Ar] 3d5 4s2",7,4,'d',54.938,1.55,161,"from the black magnesium oxide, 'magnesia nigra'",1518,2335,7.44),
	                   element(26,"Iron","Fe","[Ar] 3d6 4s2",8,4,'d',55.845,1.83,156,"the Anglo-Saxon name iren",1808,3023,7.874),
	                   element(27,"Cobalt","Co","[Ar] 3d7 4s2",9,4,'d',58.933,1.88,152,"the German word 'kobald', meaning goblin",1768,3143,8.86),
	                   element(28,"Nickel","Ni","[Ar] 3d8 4s2",10,4,'d',58.693,1.91,149,"the shortened of the German 'kupfernickel' meaning St. Nicholas's copper",1726,3005,8.912),
	                   element(29,"Copper","Cu","[Ar] 3d10 4s1",11,4,'d',63.546,1.90,145,"derived from the Latin 'Cyprium aes', meaning a metal from Cyprus",1356.6,2840,8.96),
	                   element(30,"Zinc","Zn","[Ar] 3d10 4s2",12,4,'d',65.38,1.65,142,"the German, 'zinc', meaning stone",692.73,1180,7.134),
	                   element(31,"Gallium","Ga","[Ar] 3d10 4s2 4p1",13,4,'p',69.72,1.81,136,"France",302.92,2478,5.907),
	                   element(32,"Germanium","Ge","[Ar] 3d10 4s2 4p2",14,4,'p',72.59,2.01,125,"Germany",1211.5,3107,5.323),
	                   element(33,"Arsenic","As","[Ar] 3d10 4s2 4p3",15,4,'p',74.9216,2.18,114,"the Greek name 'arsenikon' for the yellow pigment orpiment",1090,876,5.776),
	                   element(34,"Selenium","Se","[Ar] 3d10 4s2 4p4",16,4,'p',78.96,2.55,103,"Moon",494,958,4.809),
	                   element(35,"Bromine","Br","[Ar] 3d10 4s2 4p5",17,4,'p',79.904,2.96,94,"the Greek 'bromos' meaning stench",265.95,331.85,3.122),
	                   element(36,"Krypton","Kr","[Ar] 3d10 4s2 4p6",18,4,'p',83.80,3.00,88,"the Greek 'kryptos', meaning hidden",116,120.85,0.003733),
	                   element(37,"Rubidium","Rb","[Kr] 5s1",1,5,'s',85.4678,0.82,265,"the Latin 'rubidius', meaning deepest red",312.63,961,1.532),
	                   element(38,"Strontium","Sr","[Kr] 5s2",2,5,'s',87.62,0.95,219,"Strontian, a small town in Scotland",1042,1655,2.64),
	                   element(39,"Yttrium","Y","[Kr] 4d1 5s2",3,5,'d',88.9059,1.22,212,"Ytterby, Sweden",1795,3611,4.469),
	                   element(40,"Zirconium","Zr","[Kr] 4d2 5s2",4,5,'d',91.22,1.33,206,"the Persian 'zargun', meaning gold coloured",2128,4682,6.506),
	                   element(41,"Niobium","Nb","[Kr] 4d4 5s1",5,5,'d',92.9064,1.6,198,"Niobe, daughter of king Tantalus from Greek mythology",2742,5015,8.57),
	                   element(42,"Molybdenum","Mo","[Kr] 4d5 5s1",6,5,'d',95.94,2.16,190,"the Greek 'molybdos' meaning lead",2896,4912,10.22),
	                   element(43,"Technetium","Tc","[Kr] 4d5 5s2",7,5,'d',98,1.9,183,"the Greek 'tekhnetos' meaning artificial",2477,4538,11.5),
	                   element(44,"Ruthenium","Ru","[Kr] 4d7 5s1",8,5,'d',101.07,2.2,178,"Russia",2610,4425,12.37),
	                   element(45,"Rhodium","Rh","[Kr] 4d8 5s1",9,5,'d',102.9055,2.28,173,"the Greek 'rhodon', meaning rose coloured",2236,3970,12.41),
	                   element(46,"Palladium","Pd","[Kr] 4d10",10,5,'d',106.4,2.20,169,"the then recently-discovered asteroid Pallas, considered a planet at the time",1825,3240,12.02),
	                   element(47,"Silver","Ag","[Kr] 4d10 5s1",11,5,'d',107.868,1.93,165,"the Anglo-Saxon name siolfur",1235.08,2436,10.501),
	                   element(48,"Cadmium","Cd","[Kr] 4d10 5s2",12,5,'d',112.41,1.69,161,"the Latin name for the mineral calmine, 'cadmia'",594.26,1040,8.69),
	                   element(49,"Indium","In","[Kr] 4d10 5s2 5p1",13,5,'p',114.82,1.78,156,"the Latin 'indicium', meaning violet or indigo",429.78,2350,7.31),
	                   element(50,"Tin","Sn","[Kr] 4d10 5s2 5p2",14,5,'p',118.69,1.96,145,"the Anglo-Saxon word tin",505.12,2876,7.287),
	                   element(51,"Antimony","Sb","[Kr] 4d10 5s2 5p3",15,5,'p',121.75,2.05,133,"the Greek 'anti – monos', meaning not alone",903.91,1860,6.685),
	                   element(52,"Tellurium","Te","[Kr] 4d10 5s2 5p4",16,5,'p',127.60,2.1,123,"Earth, the third planet on solar system",722.72,1261,6.232),
	                   element(53,"Iodine","I","[Kr] 4d10 5s2 5p5",17,5,'p',126.9045,2.66,115,"the Greek 'iodes' meaning violet",386.7,457.5,4.93),
	                   element(54,"Xenon","Xe","[Kr] 4d10 5s2 5p6",18,5,'p',131.30,2.6,108,"the Greek 'xenos' meaning stranger",161.39,165.1,0.005887),
	                   element(55,"Caesium","Cs","[Xe] 6s1",1,6,'s',132.9054,0.79,298,"the Latin 'caesius', meaning sky blue",301.54,944,1.873),
	                   element(56,"Barium","Ba","[Xe] 6s2",2,6,'s',137.33,0.89,253,"the Greek 'barys', meaning heavy",1002,2078,3.594),
	                   element(57,"Lanthanum","La","[Xe] 5d1 6s2",3,6,'f',138.9055,1.10,195,"the Greek 'lanthanein', meaning to lie hidden",1191,3737,6.145),
	                   element(58,"Cerium","Ce","[Xe] 4f1 5d1 6s2",3,6,'f',140.12,1.12,158,"Ceres, the Roman God of agriculture",1071,3715,6.77),
	                   element(59,"Praseodymium","Pr","[Xe] 4f3 6s2",3,6,'f',140.9077,1.13,247,"the Greek 'prasios didymos' meaning green twin",1204,3785,6.773),
	                   element(60,"Neodymium","Nd","[Xe] 4f4 6s2",3,6,'f',144.24,1.14,206,"the Greek 'neos didymos' meaning new twin",1294,3347,7.007),
	                   element(61,"Promethium","Pm","[Xe] 4f5 6s2",3,6,'f',145,1.13,205,"Prometheus of Greek mythology who stole fire from the Gods and gave it to humans",1315,3273,7.26),
	                   element(62,"Samarium","Sm","[Xe] 4f6 6s2",3,6,'f',150.4,1.17,238,"Samarskite, the name of the mineral from which it was first isolated",1347,2067,7.52),
	                   element(63,"Europium","Eu","[Xe] 4f7 6s2",3,6,'f',151.96,1.2,231,"Europe",1095,1800,5.243),
	                   element(64,"Gadolinium","Gd","[Xe] 4f7 5d1 6s2",3,6,'f',157.25,1.2,233,"Johan Gadolin, chemist, physicist and mineralogist",1585,3545,7.895),
	                   element(65,"Terbium","Tb","[Xe] 4f9 6s2",3,6,'f',158.9254,1.22,225,"Ytterby, Sweden",1629,3500,8.229),
	                   element(66,"Dysprosium","Dy","[Xe] 4f10 6s2",3,6,'f',162.50,1.23,228,"the Greek 'dysprositos', meaning hard to get",1685,2840,8.55),
	                   element(67,"Holmium","Ho","[Xe] 4f11 6s2",3,6,'f',164.9304,1.24,226,"Stockholm, Sweden",1747,2968,8.795),
	                   element(68,"Erbium","Er","[Xe] 4f12 6s2",3,6,'f',167.26,1.24,226,"Ytterby, Sweden",1802,3140,9.066),
	                   element(69,"Thulium","Tm","[Xe] 4f13 6s2",3,6,'f',168.9342,1.25,222,"Thule, the ancient name for Scandinavia",1818,2223,9.321),
	                   element(70,"Ytterbium","Yb","[Xe] 4f14 6s2",3,6,'f',173.04,1.1,222,"Ytterby, Sweden",1092,1469,6.965),
	                   element(71,"Lutetium","Lu","[Xe] 4f14 5d1 6s2",3,6,'f',174.967,1.27,217,"Paris, France",1936,3668,9.84),
	                   element(72,"Hafnium","Hf","[Xe] 4f14 5d2 6s2",4,6,'d',178.49,1.3,208,"Copenhagen, Denmark",2504,4875,13.31),
	                   element(73,"Tantalum","Ta","[Xe] 4f14 5d3 6s2",5,6,'d',180.9479,1.5,200,"King Tantalus, father of Niobe from Greek mythology",3293,5730,16.654),
	                   element(74,"Tungsten","W","[Xe] 4f14 5d4 6s2",6,6,'d',183.85,2.36,193,"the Swedish 'tung sten' meaning heavy stone",3695,5825,19.25),
	                   element(75,"Rhenium","Re","[Xe] 4f14 5d5 6s2",7,6,'d',186.207,1.9,188,"Rhine, a river",3455,5870,21.02),
	                   element(76,"Osmium","Os","[Xe] 4f14 5d6 6s2",8,6,'d',190.2,2.2,185,"the Greek 'osme', meaning smell",3300,5300,22.61),
	                   element(77,"Iridium","Ir","[Xe] 4f14 5d7 6s2",9,6,'d',192.22,2.2,180,"Iris, the Greek goddess of the rainbow",2720,4700,22.56),
	                   element(78,"Platinum","Pt","[Xe] 4f14 5d9 6s1",10,6,'d',195.09,2.28,177,"the Spanish 'platina', meaning little silver",2042.1,4100,21.46),
	                   element(79,"Gold","Au","[Xe] 4f14 5d10 6s1",11,6,'d',196.9665,2.54,174,"the Anglo-Saxon word gold",1337.58,3130,19.282),
	                   element(80,"Mercury","Hg","[Xe] 4f14 5d10 6s2",12,6,'d',200.59,2.00,171,"Mercury, the first planet in the Solar System",234.31,629.88,13.5336),
	                   element(81,"Thallium","Tl","[Xe] 4f14 5d10 6s2 6p1",13,6,'p',204.37,1.62,156,"the Greek 'thallos', meaning a green twig",577,1746,11.85),
	                   element(82,"Lead","Pb","[Xe] 4f14 5d10 6s2 6p2",14,6,'p',207.2,2.33,154,"the Anglo-Saxon lead",600.65,2023.0,11.342),
	                   element(83,"Bismuth","Bi","[Xe] 4f14 5d10 6s2 6p3",15,6,'p',208.9804,2.02,143,"the German 'Bisemutum' a corruption of 'Weisse Masse' meaning white mass",544.59,1837,9.807),
	                   element(84,"Polonium","Po","[Xe] 4f14 5d10 6s2 6p4",16,6,'p',209,2.0,135,"Poland, the native country of Marie Curie, who first isolated the element",527.2,1235,9.32),
	                   element(85,"Astatine","At","[Xe] 4f14 5d10 6s2 6p5",17,6,'p',210,2.2,127,"the Greek 'astatos', meaning unstable",575,610,7.0),
	                   element(86,"Radon","Rn","[Xe] 4f14 5d10 6s2 6p6",18,6,'p',222,0,120,"From radium, as it was first detected as an emission from radium during radioactive decay",202,211.4,0.00973),
	                   element(87,"Francium","Fr","[Rn] 7s1",1,7,'s',223,0.7,0,"France, where it was first discovered",300,950,1.87),
	                   element(88,"Radium","Ra","[Rn] 7s2",2,7,'s',226.0254,0.89,0,"the Latin 'radius', meaning ray",973,1413,5.5),
	                   element(89,"Actinium","Ac","[Rn] 6d1 7s2",3,7,'f',227.0278,1.1,0,"the Greek 'actinos', meaning a ray",1323,3470,10.07),
	                   element(90,"Thorium","Th","[Rn] 6d2 7s2",3,7,'f',232.0381,1.3,0,"Thor, the Scandinavian god of thunder",2028,5060,11.72),
	                   element(91,"Protactinium","Pa","[Rn] 5f2 6d1 7s2",3,7,'f',231.0359,1.5,0,"the Greek 'protos', as a prefix to the element actinium",1845,4300,15.37),
	                   element(92,"Uranium","U","[Rn] 5f3 6d1 7s2",3,7,'f',238.029,1.38,0,"Uranus, the seventh planet in the Solar System",1408,4407,18.95),
	                   element(93,"Neptunium","Np","[Rn] 5f4 6d1 7s2",3,7,'f',237.0482,1.36,0,"Neptune, the eighth planet in the Solar System",912,4175,20.45),
	                   element(94,"Plutonium","Pu","[Rn] 5f6 7s2",3,7,'f',242,1.28,0,"Pluto, a dwarf planet in the Solar System",913,3505,19.84),
	                   element(95,"Americium","Am","[Rn] 5f7 7s2",3,7,'f',243,1.3,0,"Americas, the continent where the element was first synthesized",1449,2880,13.69),
	                   element(96,"Curium","Cm","[Rn] 5f7 6d1 7s2",3,7,'f',247,1.3,0,"Pierre Curie, a physicist, and Marie Curie, a physicist and chemist",1618,3383,13.51),
	                   element(97,"Berkelium","Bk","[Rn] 5f9 7s2",3,7,'f',247,1.3,0,"Berkeley, California, USA, where the element was first synthesized",1259,2900,14.79),
	                   element(98,"Californium","Cf","[Rn] 5f10 7s2",3,7,'f',251,1.3,0,"State of California, USA, where the element was first synthesized",1173,1745,15.1),
	                   element(99,"Einsteinium","Es","[Rn] 5f11 7s2",3,7,'f',252,1.3,0,"Albert Einstein, physicist",1133,1269,8.84),
	                   element(100,"Fermium","Fm","[Rn] 5f12 7s2",3,7,'f',257,1.3,0,"Enrico Fermi, physicist",1800,0,0),
	                   element(101,"Mendelevium","Md","[Rn] 5f13 7s2",3,7,'f',258,1.3,0,"Dmitri Mendeleyev, chemist and inventor",1100,0,0),
	                   element(102,"Nobelium","No","[Rn] 5f14 7s2",3,7,'f',250,1.3,0,"Alfred Nobel, chemist, engineer, innovator, and armaments manufacturer",1100,0,0),
	                   element(103,"Lawrencium","Lr","[Rn] 5f14 7s2 7p1",3,7,'f',260,0,0,"Ernest O. Lawrence, physicist",1900,0,0),
	                   element(104,"Rutherfodium","Rf","[Rn] 5f14 6d2 7s2",4,7,'d',261,0,0,"Ernest Rutherford, chemist and physicist",2400,5800,23.2),
	                   element(105,"Dubnium","Db","[Rn] 5f14 6d3 7s2",5,7,'d',262,0,0,"Dubna, Russia",0,0,29.3),
	                   element(106,"Seaborgium","Sg","[Rn] 5f14 6d4 7s2",6,7,'d',263,0,0,"Glenn T. Seaborg, scientist",0,0,35.0),
	                   element(107,"Bohrium","Bh","[Rn] 5f14 6d5 7s2",7,7,'d',262,0,0,"Named after physicist Niels Bohr",0,0,37.1),
	                   element(108,"Hassium","Hs","[Rn] 5f14 6d6 7s2",8,7,'d',255,0,0,"Hesse, Germany, where the element was first synthesized",0,0,40.7),
	                   element(109,"Meitnerium","Mt","[Rn] 5f14 6d7 7s2",9,7,'d',256,0,0,"Lise Meitner, physicist",0,0,37.4),
	                   element(110,"Darmstadtium","Ds","[Rn] 5f14 6d8 7s2",10,7,'d',269,0,0,"Darmstadt, Germany, where the element was first synthesized",0,0,34.8),
	                   element(111,"Roentgenium","Rg","[Rn] 5f14 6d9 7s2",11,7,'p',272,0,0,"Wilhelm Conrad Röntgen, physicist",0,0,28.7),
	                   element(112,"Copernicium","Cn","[Rn] 5f14 6d10 7s2",12,7,'p',277,0,0,"Nicolaus Copernicus, astronomer",0,0,23.7),
	                   element(113,"Nihonium","Nh","[Rn] 5f14 6d10 7s2 7p1",13,7,'p',286,0,0,"'Nihon' is a way to say Japan and means 'The Land of Rising Sun'",700,1400,16),
	                   element(114,"Flerovium","Fl","[Rn] 5f14 6d10 7s2 7p2",14,7,'p',289,0,0,"Georgy Flyorov, physicist",0,0,14),
	                   element(115,"Moscovium","Mc","[Rn] 5f14 6d10 7s2 7p3",15,7,'p',288,0,0,"Moscow, Russia",670,1400,13.5),
	                   element(116,"Livermorium","Lv","[Rn] 5f14 6d10 7s2 7p4",16,7,'p',292,0,0,"Livermore, California",709,1085,12.9),
	                   element(117,"Tennessine","Ts","[Rn] 5f14 6d10 7s2 7p5",17,7,'p',294,0,0,"Tennesse, US",723,883,7.3),
	                   element(118,"Oganesson","Og","[Rn] 5f14 6d10 7s2 7p6",18,7,'p',294,0,0,"Yuri Oganessian, nuclear physicist",0,0,5.1)};
	view_table table1;
	table1.display();
    char t;
    cout<<"\t\t\t\t\t\t  Press Enter to Continue";
    cin.get(t);
    system("cls");
    char choic;
    zero:
    void fun(void);
    {
    	int v,w,in;
    	cout<<"\n\n\n\n\n\n\n\t\t\t\t     What would you like to do?"<<"\n\n\n";
 	    cout<<"\t1. Search for an element\t";
   		cout<<"2. Add an element\t";
   		cout<<"3. View the added elements"<<"\n\n\n";
  		cout<<"\t\t\t\t\tEnter your option: ";
        cin>>v;
        system("cls");
        if(v==1)
        {
        	point:
        	cout<<"\n\n\n\n\n\n\n\t\t\t\tHow would you like to search for your element? "<<"\n\n\n";
        	cout<<"\t1. Entering the atomic number\t";
        	cout<<"2. Entering the element name\t";
        	cout<<"3. Entering the element symbol"<<"\n\n\n";
        	cout<<"\t\t\t\t\t   Enter your option: ";
        	cin>>w;
        	system("cls");
        	if(w==1)
        	{
        		one:
        		cout<<"\n\n\n\n\n\t\tEnter the atomic number of the element: ";
        		cin>>in;
        		for(x=0;x<=119;x++)
        		{
        			if(in==x)
        			{
        				cout<<"\n\a";
        				cout<<setw(30)<<"NAME"<<" - "<<elm[x].name<<"\n";
        				cout<<setw(30)<<"SYMBOL"<<" - "<<elm[x].symb<<"\n";
        				cout<<setw(30)<<"ORIGIN OF NAME"<<" - "<<elm[x].origin<<"\n";
        				cout<<setw(30)<<"ATOMIC NUMBER"<<" - "<<elm[x].atomicno<<"\n";
        				cout<<setw(30)<<"ATOMIC MASS"<<" - "<<elm[x].atomicw<<"\n";
        				cout<<setw(30)<<"ELECTRONIC CONFIGURATION"<<" - "<<elm[x].ec<<"\n";
        				cout<<setw(30)<<"GROUP"<<" - "<<elm[x].group<<"\n";
        				cout<<setw(30)<<"PERIOD"<<" - "<<elm[x].period<<"\n";
        				cout<<setw(30)<<"BLOCK"<<" - "<<elm[x].block<<"\n";
        				if(elm[x].atomicr==0)
        				{
        					cout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<"No Data\n";
						}
						else
						{
							cout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<elm[x].atomicr<<"\n";
						}
						if(elm[x].en==0)
						{
							cout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<"No Data\n";
						}
						else
						{
							cout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<elm[x].en<<"\n";
						}
						if(elm[x].meltp==0)
						{
							cout<<setw(30)<<"MELTING POINT"<<" - "<<"No Data\n";
						}
						else
						{
							cout<<setw(30)<<"MELTING POINT"<<" - "<<elm[x].meltp<<"\n";
						}
						if(elm[x].boilp==0)
						{
							cout<<setw(30)<<"BOILING POINT"<<" - "<<"No Data\n";
						}
						else
						{
							cout<<setw(30)<<"BOILING POINT"<<" - "<<elm[x].boilp<<"\n";
						}
						if(elm[x].density==0)
						{
							cout<<setw(30)<<"DENSITY"<<" - "<<"No Data\n";
						}
						else
						{
							cout<<setw(30)<<"DENSITY"<<" - "<<elm[x].density<<"\n";
						}
						goto end;
					}
				}
				cout<<"\n\n\n\n\t\t\tEnter a valid input\n\n";
				system("PAUSE");
				system("cls");
			    goto one;
				    
				
			}
			else if(w==2)
			{
				two:
				cout<<"\n\n\n\t\t   Enter the element name given by the following format: "<<"\n\n";
				cout<<"\t\t\t               \"Element\""<<"\n\n";
				cout<<"\t\t\t                ";
				cin>>Name;
				for(x=0;x<119;x++)
				{
					void comparefun(string s1,string s2);
					{
				      string s1=Name;
				      string s2=elm[x].name;
				      int aa = s1.compare(s2);
					  if(aa==0)
        			  {
        				 cout<<"\n\a";
        			   	 cout<<setw(30)<<"NAME"<<" - "<<elm[x].name<<"\n";
        				 cout<<setw(30)<<"SYMBOL"<<" - "<<elm[x].symb<<"\n";
        				 cout<<setw(30)<<"ORIGIN OF NAME"<<" - "<<elm[x].origin<<"\n";
        				 cout<<setw(30)<<"ATOMIC NUMBER"<<" - "<<elm[x].atomicno<<"\n";
        				 cout<<setw(30)<<"ATOMIC MASS"<<" - "<<elm[x].atomicw<<"\n";
        				 cout<<setw(30)<<"ELECTRONIC CONFIGURATION"<<" - "<<elm[x].ec<<"\n";
        				 cout<<setw(30)<<"GROUP"<<" - "<<elm[x].group<<"\n";
        				 cout<<setw(30)<<"PERIOD"<<" - "<<elm[x].period<<"\n";
        				 cout<<setw(30)<<"BLOCK"<<" - "<<elm[x].block<<"\n";
        				 if(elm[x].atomicr==0)
        				 {
        					cout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<"No Data\n";
						 }
						 else
						 {
						 	cout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<elm[x].atomicr<<"\n";
						 }
						 if(elm[x].en==0)
						 {
						 	cout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<"No Data\n";
						 }
						 else
						 {
						 	cout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<elm[x].en<<"\n";
						 }
						 if(elm[x].meltp==0)
						 {
						 	cout<<setw(30)<<"MELTING POINT"<<" - "<<"No Data\n";
						 }
						 else
						 {
						 	cout<<setw(30)<<"MELTING POINT"<<" - "<<elm[x].meltp<<"\n";
						 }
						 if(elm[x].boilp==0)
						 {
						 	cout<<setw(30)<<"BOILING POINT"<<" - "<<"No Data\n";
						 }
						 else
						 {
						  	cout<<setw(30)<<"BOILING POINT"<<" - "<<elm[x].boilp<<"\n";
						 }
						 if(elm[x].density==0)
						 {
					 		cout<<setw(30)<<"DENSITY"<<" - "<<"No Data\n";
						 }
						 else
						 {
					 		cout<<setw(30)<<"DENSITY"<<" - "<<elm[x].density<<"\n";
						 }
						 goto end;
					  }
				    }
				}
				cout<<"\n\n\n\n\t\t\tEnter a valid input\n\n";
				system("PAUSE");
				system("cls");
				goto two;
			}
			else if(w==3)
			{
				three:
					cout<<"\n\n\n\t\t   Enter the proper Symbol of the element: ";
					cin>>Symbol;
					for(x=0;x<119;x++)
					{
						void funcomp(string r1,string r2);
						{
							string r1=Symbol;
							string r2=elm[x].symb;
							int cmp = r1.compare(r2);
							if(cmp==0)
							{
								cout<<"\n\a";
								cout<<setw(30)<<"NAME"<<" - "<<elm[x].name<<"\n";
								cout<<setw(30)<<"SYMBOL"<<" - "<<elm[x].symb<<"\n";
								cout<<setw(30)<<"ORIGIN OF NAME"<<" - "<<elm[x].origin<<"\n";
								cout<<setw(30)<<"ATOMIC NUMBER"<<" - "<<elm[x].atomicno<<"\n";
								cout<<setw(30)<<"ATOMIC MASS"<<" - "<<elm[x].atomicw<<"\n";
								cout<<setw(30)<<"ELECTRONIC CONFIGURATION"<<" - "<<elm[x].ec<<"\n";
								cout<<setw(30)<<"GROUP"<<" - "<<elm[x].group<<"\n";
								cout<<setw(30)<<"PERIOD"<<" - "<<elm[x].period<<"\n";
								cout<<setw(30)<<"BLOCK"<<" - "<<elm[x].block<<"\n";
								if(elm[x].atomicr==0)
								{
									cout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<"No Data\n";
								}
								else
								{
									cout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<elm[x].atomicr<<"\n";
								}
								if(elm[x].en==0)
								{
									cout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<"No Data\n";
								}
								else
								{
									cout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<elm[x].en<<"\n";
								}
								if(elm[x].meltp==0)
								{
									cout<<setw(30)<<"MELTING POINT"<<" - "<<"No Data\n";
								}
								else
								{
									cout<<setw(30)<<"MELTING POINT"<<" - "<<elm[x].meltp<<"\n";
								}
								if(elm[x].boilp==0)
								{
									cout<<setw(30)<<"BOILING POINT"<<" - "<<"No Data\n";
								}
								else
								{
									cout<<setw(30)<<"BOILING POINT"<<" - "<<elm[x].boilp<<"\n";
								}
								if(elm[x].density==0)
								{
									cout<<setw(30)<<"DENSITY"<<" - "<<"No Data\n";
								}
								else
								{
									cout<<setw(30)<<"DENSITY"<<" - "<<elm[x].density<<"\n";
								}
								goto end;
							}
						}
					}
				cout<<"\n\n\n\n\t\t\tEnter a valid input\n\n";
				system("PAUSE");
				system("cls");
				goto three;	
			}
			else
			{
				cout<<"\n\n\n\n\t\t\tEnter a valid input\n\n";
				system("PAUSE");
				system("cls");
				goto point;
			}
		}
		else if(v==2)
		{
	        ofstream fout("periodic_table.txt",ios::app);
	        fout<<"\t\t DETAILS OF THE NEW ELEMENT ADDED IN THE MODERN PERIODIC TABLE \n\n";
			cout<<"\n\n\t\t Enter the details of the Element to be added properly: \n\n";
			cout<<setw(30)<<"NAME"<< "- ";
			cin>>addname;
			fout<<setw(30)<<"NAME"<<" - "<<addname<<"\n";
			cout<<"\n"<<setw(30)<<"SYMBOL"<<" - ";
			cin>>addsymb;
			fout<<setw(30)<<"SYMBOL"<<" - "<<addsymb<<"\n";
			cout<<"\n"<<setw(30)<<"ORIGIN OF NAME"<<" - ";
			cin.ignore();
			getline(cin, neworigin);
			fout<<setw(30)<<"ORIGIN OF NAME"<<" - "<<neworigin<<"\n";
			cout<<"\n"<<setw(30)<<"ATOMIC NUMBER"<<" - ";
			cin>>addno;
			fout<<setw(30)<<"ATOMIC NUMBER"<<" - "<<addno<<"\n";
			cout<<"\n"<<setw(30)<<"ATOMIC MASS"<<" - ";
			cin>>addwt;
			fout<<setw(30)<<"ATOMIC MASS"<<" - "<<addwt<<"\n";
			cout<<"\n"<<setw(30)<<"ELECTRONIC CONFIGURATION"<<" - ";
			cin.ignore();
			getline(cin, addec);
			fout<<setw(30)<<"ELECTRONIC CONFIGURATION"<<" - "<<addec<<"\n";
			cout<<"\n"<<setw(30)<<"GROUP"<<" - ";
			cin>>addgroup;
			fout<<setw(30)<<"GROUP"<<" - "<<addgroup<<"\n";
			cout<<"\n"<<setw(30)<<"PERIOD"<<" - ";
			cin>>addperiod;
			fout<<setw(30)<<"PERIOD"<<" - "<<addperiod<<"\n";
			cout<<"\n"<<setw(30)<<"BLOCK"<<" - ";
			cin>>addblock;
			fout<<setw(30)<<"BLOCK"<<" - "<<addblock<<"\n";
			cout<<"\n"<<setw(30)<<"ATOMIC RADIUS"<<" - ";
			cin>>addradius;
			if(addradius==0)
			{
				fout<<setw(30)<<"ATOMIC RADIUS"<<" - No Data\n";
			}
			else
			{
				fout<<setw(30)<<"ATOMIC RADIUS"<<" - "<<addradius<<"\n";
			}
			cout<<"\n"<<setw(30)<<"ELECTRONEGATIVITY"<<" - ";
			cin>>adden;
			if(adden==0)
			{
				fout<<setw(30)<<"ELECTRONEGATIVITY"<<" - No Data\n";
			}
			else
			{
				fout<<setw(30)<<"ELECTRONEGATIVITY"<<" - "<<adden<<"\n";
			}
			cout<<"\n"<<setw(30)<<"MELTING POINT"<<" - ";
			cin>>addmelt;
			if(addmelt==0)
			{
				fout<<setw(30)<<"MELTING POINT"<<" - No Data\n";
			}
			else
			{
				fout<<setw(30)<<"MELTING POINT"<<" - "<<addmelt<<"\n";
			}
			cout<<"\n"<<setw(30)<<"BOILING POINT"<<" - ";
			cin>>addboil;
			if(addboil==0)
			{
				fout<<setw(30)<<"BOILING POINT"<<" - No Data\n";
			}
			else
			{
				fout<<setw(30)<<"BOILING POINT"<<" - "<<addboil<<"\n";
			}
			cout<<"\n"<<setw(30)<<"DENSITY"<<" - ";
			cin>>adddensity;
			if(adddensity==0)
			{
				fout<<setw(30)<<"DENSITY"<<" - No Data\n\n\n";
			}
			else
			{
				fout<<setw(30)<<"DENSITY"<<" - "<<adddensity<<"\n\n\n";
			}
		}
		else if(v==3)
		{
			std::ifstream f("periodic_table.txt");
           	if(f.is_open())
	           std::cout<<f.rdbuf();
		}
	end:
	system("PAUSE");
	system("cls");	
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tWould you like to continue?(Y/N) ";
	}
	cin>>choic;
    if(choic=='n' || choic=='N')
    {
        goto exit;
    }
    else if(choic=='y' || choic=='Y')
    {
    	system("cls");
		goto zero;
	}
	exit:
    return 0;
}
