#include <windows.h>
#include <WinUser.h>
#include <iostream>
#include <stdio.h>
using namespace std;;
int main() {
	int right,bottom,right2,bottom2;
	right = 1195;
	bottom = 394;
	right2 =680;
	bottom2 = 706;
	x:
	int sayac =400;
	x1:
	 if(sayac >0) {
	Sleep(1000);
HWND Client = FindWindow (0, "MiaMt2 - www.miamt2.com");
INPUT Event = {0};
Event.type = INPUT_KEYBOARD;
Event.ki.dwFlags = 0;
Event.ki.wScan = ::MapVirtualKey(VK_SPACE,MAPVK_VK_TO_VSC);
Event.ki.time = 2000;                                  
Event.ki.dwExtraInfo = 0;
Event.ki.wVk = VK_SPACE;                           
SendInput(1, &Event, sizeof(Event));        
Sleep(100);                                
Event.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;         
SendInput(1, &Event, sizeof(Event));
Event.ki.dwFlags = KEYEVENTF_KEYUP;
Event.type = INPUT_KEYBOARD;
Event.ki.dwFlags = 0;
Event.ki.wScan = ::MapVirtualKey(0x33,MAPVK_VK_TO_VSC);
Event.ki.time = 2000;                                  
Event.ki.dwExtraInfo = 0;
Event.ki.wVk = 0x33;                   
SendInput(1, &Event, sizeof(Event));      
Sleep(100);                              
Event.ki.dwFlags = KEYEVENTF_KEYUP;         
SendInput(1, &Event, sizeof(Event));	
sayac--;
goto x1;
}			  
  	else {
	Sleep(10);
	
		if (right ==1335) {
			right = 1195;
				bottom = bottom +28;
				HWND mouse = FindWindow(0," MiaMt2 - www.miamt2.com");
        RECT rect = {0};
        GetWindowRect(mouse, &rect);
        SetForegroundWindow(mouse);
        SetActiveWindow(mouse);
        SetCursorPos(rect.right + 1215,rect.bottom+bottom);
        Sleep(100);
         mouse_event(MOUSEEVENTF_LEFTDOWN, 0,0,0,0);
         Sleep(100);
         mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
        Sleep(100);
          SetCursorPos(rect.right  +right2, rect.bottom +bottom2);
          Sleep(100);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0,0,0,0);
            Sleep(100);
         mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);		
         goto x;		
			}
		}
		right = right +28;
		HWND mouse = FindWindow(0," MiaMt2 - www.miamt2.com");
        RECT rect = {0};
        GetWindowRect(mouse, &rect);
        SetForegroundWindow(mouse);
        SetActiveWindow(mouse);
          Sleep(100);
        SetCursorPos(rect.right + right, rect.bottom + bottom);
        Sleep(100);
         mouse_event(MOUSEEVENTF_LEFTDOWN, 0,0,0,0);
         mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
        Sleep(100);
          SetCursorPos(rect.right  +right2, rect.bottom +bottom2);
          Sleep(100);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0,0,0,0);
         mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
         goto x;
}
		
  

	
         
		 
		 
		 




	





