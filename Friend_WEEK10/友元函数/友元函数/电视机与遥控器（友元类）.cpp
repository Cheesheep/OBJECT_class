//#include<iostream>
//using namespace std;
//
//class TV {
//	int state, volume, maxchannel, channel, mode, input;
//public:
//	TV(){}
//	TV(int s, int mc, int m, int _i,int cha,int vol) {
//		state = s, maxchannel = mc; mode = m;input = _i;
//		channel = cha;volume = vol;
//	}
//	void onoff()  { if (state) state = 0;else state = 1; };
//	bool ison()const { if (!state) return 0;else return 1; }
//	bool volup() {if(volume < 20) volume++; return 0; }
//	bool voldown() {if(volume > 0) volume--; return 0; }
//	void chanup() {if(channel < maxchannel) channel++;}
//	void chandown() { if(channel > 0) channel--; }
//	void set_mode() { if (mode) mode = 0; else mode = 1; }
//	void set_input() { if (input) input = 0;else input = 1; }
//	void settings() const;
//	friend class Remote;
//};
//void TV::settings() const{
//	if (state)
//		cout << "on" << ' ';
//	else
//		cout << "off" << ' ';
//	cout << volume << ' ' << channel << ' ';
//	if (mode)
//		cout << "Cable" << ' ';
//	else
//		cout << "Antenna" << ' ';
//	if (input)
//		cout << "VCR" ;
//	else 
//		cout << "TV" ;
//}
//
//class Remote {
//	int mode;
//public:
//	Remote(){}
//	Remote(int m):mode(m){}
//	bool volup(TV& t) { return t.volup(); }
//	bool voldown(TV& t) { return t.voldown(); }
//	void onoff(TV& t) { t.onoff(); }
//	void chanup(TV& t) { t.chanup(); }
//	void chandown(TV& t) { t.chandown(); }
//	void set_chan(TV& t, int c) { t.channel = c; }
//	void set_mode(TV& t) { t.set_mode(); }
//	void set_input(TV& t) { t.set_input(); }
//};
//TV Command(Remote &myre,TV &myTV) {
//	string com;
//	cin >> com;
//	if (!myTV.ison() && com != "onoff")
//		return myTV;
//	if (com == "onoff")
//		myre.onoff(myTV);
//	else if (com == "volup")
//		myre.volup(myTV);
//	else if (com == "voldown")
//		myre.voldown(myTV);
//	else if (com == "chanup")
//		myre.chanup(myTV);
//	else if (com == "chandown")
//		myre.chandown(myTV);
//	else if (com == "set_mode")
//		myre.set_mode(myTV);
//	else if (com == "set_input")
//		myre.set_input(myTV);
//	return myTV;
//}
//
//int main() {
//	string state,mode,input;
//	int _s, _m, _in;
//	_s = _m = _in = 0;
//	int vol, channel;
//	cin >> state >> vol >> channel >> mode >> input;
//	if (state == "on")
//		_s = 1;
//	if (mode == "Cable")
//		_m = 1;
//	if (input == "VCR")
//		_in = 1;
//	TV mytv(_s,100,_m,_in,channel,vol);
//	Remote myre(_m);
//	for (int i = 0; i < 5; i++)
//	{
//		mytv = Command(myre, mytv);
//	}
//	mytv.settings();
//
//}