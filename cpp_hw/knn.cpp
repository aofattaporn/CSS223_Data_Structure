#include <iostream>
// #include <bits/stdc++.h>
#include <string>
using namespace std;

struct data{
		string id;
		string name;
		float Ne;
		float Ni;
		float Te;
		float Ti;
		float Se;
		float Si;
		float Fe;
		float Fi;
		string type;
	};
void dataa(struct data *y, string id, string name, float Ne, float Ni, float Te, float Ti, float Se, float Si, float Fe, float Fi, string type);

int main()
{
	data x[40];
	dataa (&x[0],"99999999999","Warin Wattanapornprom",32,32,27,36,29,31,28,23,"INTP");
	dataa (&x[1],"63060500401","Kantinan Meesuk",35.4,31,33,30,38,31,34,31,"ENTP");
	dataa (&x[2],"63060500402","Kumpanat Joompabuth",26,31,33,30,26,33,30,24,"INTJ");
	dataa (&x[3],"63090500403","Kittiphot Amnakkittikul",24.4,30.2,31,34,28,36,22,17,"ISTJ");
	dataa (&x[4],"63090500404","Kanate Boonsiri",24.4,18.4,31,30,32,34,25,24,"ISTJ");
	dataa (&x[5],"63090500405","Jirakit Meesupparsert",22.2,25.8,36,37,29,36,34,22,"ENTJ");
	dataa (&x[6],"63090500406","Jirasika Kijsanapitak",43.2,34,36,36,39,38,40,35,"INTP");
	dataa (&x[7],"63090500407","Chisanupong Wipachainun",34.6,19,18,24,19,20,30,22,"INFP");	
	dataa (&x[8],"63090500408","Thapanee Rueangrongwat",32.4,27,35,34,27,23,31,19,"ENFP");
	dataa (&x[9],"63090500409","Nachanon Nuanphet",28.4,25.6,33,35,32,30,24,26,"ESTP");
	dataa (&x[10],"63090500410","Thanakrit  Sangsuwan",30.2,31.4,35,33,36,33,36,34,"ENTJ");
	dataa (&x[11],"63090500411","Thunyathep Tassanaananchai",19.4,12,25,28,25,23,23,22,"ESTJ");
	dataa (&x[12],"63090500412","Bavornthat Dangtang",38.8,28.8,44,39,27,36,40,33,"INTJ");
	dataa (&x[13],"63090500413","Poramat Wongphueng",29.4,34,34,32,30,33,29,36,"INTJ");
	dataa (&x[14],"63090500414","Pichsinee Angsuchaijij",33.4,38.6,29,29,26,37,24,25,"INTJ");
	dataa (&x[15],"63090500415","Phutthiphong Saelu",26.8,30.6,25,31,24,19,21,20,"ENTP");
	dataa (&x[16],"63090500416","Wutthichai Piyarungroj",30,29.6,34,32,38,28,33,22,"ENTP");
	dataa (&x[17],"63090500417","Surawee Kraikruan",29.4,30,28,25,37,23,30,36,"ENTP");
	dataa (&x[18],"63090500418","Kanokwan Deelee",29.8,32,17,25,26,26,32,20,"ENFP");
	dataa (&x[19],"63090500419","Katepiss Sriburapa",29,22.8,40,28,27,31,29,19,"ENTJ");
	dataa (&x[20],"63090500420","Khananon Kamjumroon",30,23.2,27,32,26,30,30,25,"ENTP");
	dataa (&x[21],"63090500421","Julalak Pongsri",25.5,33,28,34,37,27,28,24,"INFJ");
	dataa (&x[22],"63090500422","Chinnakit Bunluepanyadee",37.4,32,38,37,31,35,34,30,"ESTJ");
	dataa (&x[23],"63090500423","Chotnarint Phisitphadhrikul",29.8,26.4,28,36,29,30,33,28,"INTJ");
	dataa (&x[24],"63090500424","Thitipong Thongkam",18.4,15,30,33,33,31,26,23,"ESTJ");
	dataa (&x[25],"63090500426","Nitipat Sritharachiyanon",25.4,29.4,30,31,37,27,36,20,"ESTP");
	dataa (&x[26],"63090500427","Palita Simaborvonsut",28.2,25.4,31,28,30,32,25,32,"ENTP");
	dataa (&x[27],"63090500429","Pisanu Boonyaanan",32.8,31,34,40,28,26,20,30,"INTP");
	dataa (&x[28],"63090500430","Pattarawarin Jeamthong",18.2,16.2,21,22,22,33,23,21,"ESTP");
	dataa (&x[29],"63090500431","Pakorn Moungsri",24.4,24.2,26,34,18,22,12,20,"ISTJ");
	dataa (&x[31],"63090600432","Poohdish Thawornsusin",26.8,15,36,35,22,26,21,23,"ESTJ");
	dataa (&x[32],"63090500433","Wasamon Suksai",37.4,36.8,39,39,26,33,31,29,"INTJ");
	dataa (&x[33],"63090500434","Witwisit Sorranawit",26.4,21.4,35,44,31,30,36,30,"ESTP");
	dataa (&x[34],"63090500435","Weeraya Muenkai",15.6,25,12,19,11,19,24,20,"INFP");
	dataa (&x[35],"63090500436","Nutyada Thanasinthunyawath",31.6,29.4,32,30,34,29,31,29,"ENTP");
	dataa (&x[36],"63090500438","Thanathat Lertpinitamonkul",31,19.6,21,21,20,24,19,24,"INFP");
	dataa (&x[37],"63090500439","Pronphol Tangaulrat",19.8,12,24,28,28,28,23,14,"ESTJ");
	dataa (&x[38],"63090500440","Peerawat Manopapapin",27,26.6,30,32,27,32,25,23,"ESFP");
	dataa (&x[39],"63090500441","Worabadin Piammahamongkol",26,27,31,32,21,41,26,21,"ISTJ");
	dataa (&x[40],"63090500442","Attaporn Peungsook",38.6,25.8,29,39,22,27,33,22,"INTP");



   // main function 
   cout << x[40] << endl;
}

void dataa(struct data *y, string id, string name, float Ne, float Ni, float Te, float Ti, float Se, float Si, float Fe, float Fi, string type){
	data *ptr = y;
	ptr->id = id;
	ptr->name = name;
	ptr->Ne = Ne;
	ptr->Ni = Ni;
	ptr->Te = Te;
	ptr->Ti = Ti;
	ptr->Se = Se;
	ptr->Si = Si;
	ptr->Fe = Fe;
	ptr->Fi = Fi;
}