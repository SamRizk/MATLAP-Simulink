function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "DIO_control"};
	this.sidHashMap["DIO_control"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "DIO_control:2"};
	this.sidHashMap["DIO_control:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Bit0_PA_ON"] = {sid: "DIO_control:2"};
	this.sidHashMap["DIO_control:2"] = {rtwname: "<Root>/Bit0_PA_ON"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "DIO_control:2:2"};
	this.sidHashMap["DIO_control:2:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "DIO_control:2:4"};
	this.sidHashMap["DIO_control:2:4"] = {rtwname: "<S1>:4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
