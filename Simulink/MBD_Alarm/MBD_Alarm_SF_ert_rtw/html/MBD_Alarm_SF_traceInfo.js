function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "MBD_Alarm_SF"};
	this.sidHashMap["MBD_Alarm_SF"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "MBD_Alarm_SF:1"};
	this.sidHashMap["MBD_Alarm_SF:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Alarm_System"] = {sid: "MBD_Alarm_SF:1"};
	this.sidHashMap["MBD_Alarm_SF:1"] = {rtwname: "<Root>/Alarm_System"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "MBD_Alarm_SF:1:2"};
	this.sidHashMap["MBD_Alarm_SF:1:2"] = {rtwname: "<S1>:2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
