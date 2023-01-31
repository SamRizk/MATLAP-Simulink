function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["MBD_Alarm_SF.c:27"]=1;
    this.lineTraceFlag["MBD_Alarm_SF.c:28"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
