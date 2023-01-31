function varargout = Panel_GUI(varargin)
% PANEL_GUI MATLAB code for Panel_GUI.fig
%      PANEL_GUI, by itself, creates a new PANEL_GUI or raises the existing
%      singleton*.
%
%      H = PANEL_GUI returns the handle to a new PANEL_GUI or the handle to
%      the existing singleton*.
%
%      PANEL_GUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in PANEL_GUI.M with the given input arguments.
%
%      PANEL_GUI('Property','Value',...) creates a new PANEL_GUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Panel_GUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Panel_GUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Panel_GUI

% Last Modified by GUIDE v2.5 17-Dec-2022 23:51:43

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Panel_GUI_OpeningFcn, ...
                   'gui_OutputFcn',  @Panel_GUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before Panel_GUI is made visible.
function Panel_GUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Panel_GUI (see VARARGIN)

% Choose default command line output for Panel_GUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Panel_GUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Panel_GUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function fNum_Callback(hObject, eventdata, handles)
% hObject    handle to fNum (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of fNum as text
%        str2double(get(hObject,'String')) returns contents of fNum as a double


% --- Executes during object creation, after setting all properties.
function fNum_CreateFcn(hObject, eventdata, handles)
% hObject    handle to fNum (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function sNum_Callback(hObject, eventdata, handles)
% hObject    handle to sNum (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of sNum as text
%        str2double(get(hObject,'String')) returns contents of sNum as a double


% --- Executes during object creation, after setting all properties.
function sNum_CreateFcn(hObject, eventdata, handles)
% hObject    handle to sNum (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in ADD.
function ADD_Callback(hObject, eventdata, handles)
% hObject    handle to ADD (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of ADD
A = str2double(get(handles.fNum,'string'));
B = str2double(get(handles.sNum,'string'));
C = A+B;
set(handles.Result,'string',num2str(C));



% --- Executes on button press in MUL.
function MUL_Callback(hObject, eventdata, handles)
% hObject    handle to MUL (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of MUL
A = str2double(get(handles.fNum,'string'));
B = str2double(get(handles.sNum,'string'));
C = A*B;
set(handles.Result,'string',num2str(C));

% --- Executes on button press in SUB.
function SUB_Callback(hObject, eventdata, handles)
% hObject    handle to SUB (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of SUB
A = str2double(get(handles.fNum,'string'));
B = str2double(get(handles.sNum,'string'));
C = A-B;
set(handles.Result,'string',num2str(C));

% --- Executes on button press in DIV.
function DIV_Callback(hObject, eventdata, handles)
% hObject    handle to DIV (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of DIV
A = str2double(get(handles.fNum,'string'));
B = str2double(get(handles.sNum,'string'));
C = A/B;
set(handles.Result,'string',num2str(C));

% --- Executes on button press in CLR.
function CLR_Callback(hObject, eventdata, handles)
% hObject    handle to CLR (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of CLR
set(handles.fNum,'string','');
set(handles.sNum,'string','');
set(handles.Result,'string','');



function EditEq_Callback(hObject, eventdata, handles)
% hObject    handle to EditEq (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of EditEq as text
%        str2double(get(hObject,'String')) returns contents of EditEq as a double


% --- Executes during object creation, after setting all properties.
function EditEq_CreateFcn(hObject, eventdata, handles)
% hObject    handle to EditEq (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function edit4_Callback(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit4 as text
%        str2double(get(hObject,'String')) returns contents of edit4 as a double


% --- Executes during object creation, after setting all properties.
function edit4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function vectorOne_Callback(hObject, eventdata, handles)
% hObject    handle to vectorOne (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of vectorOne as text
%        str2double(get(hObject,'String')) returns contents of vectorOne as a double


% --- Executes during object creation, after setting all properties.
function vectorOne_CreateFcn(hObject, eventdata, handles)
% hObject    handle to vectorOne (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function vectorTwo_Callback(hObject, eventdata, handles)
% hObject    handle to vectorTwo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of vectorTwo as text
%        str2double(get(hObject,'String')) returns contents of vectorTwo as a double


% --- Executes during object creation, after setting all properties.
function vectorTwo_CreateFcn(hObject, eventdata, handles)
% hObject    handle to vectorTwo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

% --- Executes on button press in SineWave.
function SineWave_Callback(hObject, eventdata, handles)
% hObject    handle to SineWave (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
x = 0:pi/60:8*pi;
y = sin(x);
plot(x,y), grid

% --- Executes on button press in CosWave.
function CosWave_Callback(hObject, eventdata, handles)
% hObject    handle to CosWave (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
x = 0:pi/60:8*pi;
y = cos(x);
plot(x,y), grid


% --- Executes on button press in Eqn.
function Eqn_Callback(hObject, eventdata, handles)
% hObject    handle to Eqn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
a = get(handles.EditEq,'string');
x = 0:0.1:10;
axes(handles.axes2)
plot(eval(a)), grid


% --- Executes on button press in plus.
function plus_Callback(hObject, eventdata, handles)
% hObject    handle to plus (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
F = str2double(get(handles.vectorOne,'string'));
S = str2double(get(handles.vectorTwo,'string'));
K = F+S;
set(handles.text3,'string',num2str(K));


% --- Executes on button press in minus.
function minus_Callback(hObject, eventdata, handles)
% hObject    handle to minus (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
a = str2double(get(handles.vectorOne,'string'));
b = str2double(get(handles.vectorTwo,'string'));
C = plus(a,b);
set(handles.text3,'string',num2str(C));

% --- Executes on button press in mult.
function mult_Callback(hObject, eventdata, handles)
% hObject    handle to mult (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in division.
function division_Callback(hObject, eventdata, handles)
% hObject    handle to division (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
