function varargout = PWM(varargin)
% PWM MATLAB code for PWM.fig
%      PWM, by itself, creates a new PWM or raises the existing
%      singleton*.
%
%      H = PWM returns the handle to a new PWM or the handle to
%      the existing singleton*.
%
%      PWM('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in PWM.M with the given input arguments.
%
%      PWM('Property','Value',...) creates a new PWM or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before PWM_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to PWM_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help PWM

% Last Modified by GUIDE v2.5 15-Dec-2022 20:57:43

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @PWM_OpeningFcn, ...
                   'gui_OutputFcn',  @PWM_OutputFcn, ...
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

%==============================================================================%

% --- Executes just before PWM is made visible.
function PWM_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to PWM (see VARARGIN)

% Choose default command line output for PWM
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes PWM wait for user response (see UIRESUME)
% uiwait(handles.figure1);
clear all;
global a;
global b;
a = arduino('COM6', 'Uno');
b = a;
configurePin(a,'D11','DigitalOutput');
configurePin(b,'D12','DigitalOutput');

%==============================================================================%
% --- Outputs from this function are returned to the command line.
function varargout = PWM_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;
%==============================================================================%

% --- Executes on button press in Led_On_.
function Led_On__Callback(hObject, eventdata, handles)
% hObject    handle to Led_On_ (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global b;
writeDigitalPin(b, 'D12', 1);

%==============================================================================%
% --- Executes on button press in Led_Off_.
function Led_Off__Callback(hObject, eventdata, handles)
% hObject    handle to Led_Off_ (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global b;
writeDigitalPin(b, 'D12', 0);
    
%==============================================================================%

function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit1 as text
%        str2double(get(hObject,'String')) returns contents of edit1 as a double
handles.data1 = get(hObject,'String');
handles.xSamples = str2double(handles.data1);
guidata(hObject,handles);

%==============================================================================%
% --- Executes during object creation, after setting all properties.
function edit1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


%==============================================================================%

% --- Executes on button press in Simulate.
function Simulate_Callback(hObject, eventdata, handles)
% hObject    handle to Simulate (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global k;
global a;
x = 0;
for k = 1:1:handles.xSamples
    b = a.readVoltage('A0');
    brightness = b/5; %brightness value rarnges from 0 to 1 so we have to divide it by 5 Volts as i t is the output of arduino 
    writePWMDutyCycle(a,'D11',brightness);
    x = [x,b];
    plot(x, 'LineWidth', 2); grid on;
    axis([0 handles.xSamples 0 20]);
    pause(0.01);
end    

%==============================================================================%