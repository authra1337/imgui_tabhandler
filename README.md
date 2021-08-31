# imgui_tabhandler
A Tab handler made for ImGui.

example usage: 
```cplusplus
        int curtab = 0;
        tabhandler::tab tabs;
        tabs_.sameline = true;
        tabs_.add(tabhandler::createtab("name", 1));
        tabs.create();
        curtab = tabs.id;
        
        //imgui code
        
        if (curtab == 1) { 
          ImGui::Text("You are on tab 1!");
        }
```
