# imgui_tabhandler
A Tab handler made for ImGui.

example usage: 
```cpp
int curtab = 0;
tabhandler::tab tabs;
tabs.sameline = true;
tabs.imguitabs = true;
//or
tabs.imguitabs = false;
tabs.add(tabhandler::createtab("Tab 1", 1));
tabs.add(tabhandler::createtab("Tab 2", 2));
tabs.create();
curtab = tabs.id;
        
//imgui code

if (tabs.id == 1) {
        ImGui::Text("You are on tab 1!");
}
        
if (tabs.id == 2) {
        ImGui::Text("You are on tab 2!");
}
     
```
//made for imgui
