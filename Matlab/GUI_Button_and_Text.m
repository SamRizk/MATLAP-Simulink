function varargout = GUI_Button_and_Text(varargin)
% GUI_BUTTON_AND_TEXT MATLAB code for GUI_Button_and_Text.fig
%      GUI_BUTTON_AND_TEXT, by itself, creates a new GUI_BUTTON_AND_TEXT or raises the existing
%      singleton*.
%
%      H = GUI_BUTTON_AND_TEXT returns the handle to a new GUI_BUTTON_AND_TEXT or the handle to
%      the existing singleton*.
%
%      GUI_BUTTON_AND_TEXT('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GUI_BUTTON_AND_TEXT.M with the given input arguments.
%
%      GUI_BUTTON_AND_TEXT('Property','Value',...) creates a new GUI_BUTTON_AND_TEXT or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before GUI_Button_and_Text_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to GUI_Button_and_Text_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help GUI_Button_and_Text

% Last Modified by GUIDE v2.5 11-Dec-2022 18:39:13

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @GUI_Button_and_Text_OpeningFcn, ...
                   'gui_OutputFcn',  @GUI_Button_and_Text_OutputFcn, ...
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


% --- Executes just before GUI_Button_and_Text is made visible.
function GUI_Button_and_Text_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to GUI_Button_and_Text (see VARARGIN)

% Choose default command line output for GUI_Button_and_Text
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes GUI_Button_and_Text wait for user response (see UIRESUME)
% uiwait(handles.figure1);

global counter;
counter = 0;


% --- Outputs from this function are returned to the command line.
function varargout = GUI_Button_and_Text_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in PushButton1.
function PushButton1_Callback(hObject, eventdata, handles)
% hObject    handle to PushButton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global counter
counter = counter + 1
str = sprintf('Count: %d',counter);
set(handles.CounterDisplay,'String',str);

% --- Executes on button press in PushButton2.
function PushButton2_Callback(hObject, eventdata, handles)
% hObject    handle to PushButton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global counter
counter = counter - 1
str = sprintf('Count: %d',counter);
set(handles.CounterDisplay,'String',str);
