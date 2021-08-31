#include "imgui.h"
#include "imgui_impl_dx9.h"
#include "imgui_impl_win32.h"
#include <string>
#include <list>
using namespace std;

namespace tabhandler {
    struct tabitem {
        std::string name;
        int id;
    };

    struct tab {
        //  int count;
        int id;
        bool sameline;
        bool imguitabs = false;
        list<tabitem> items;
        void add(tabitem item) {
            items.push_back(item);
        }
        void create() {
            if (imguitabs) {
                ImGui::BeginTabBar("");
            }
            for (tabitem x : items) {
                for (int i = 0; i < sizeof(items) / sizeof(items); i++)
                {
                    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.20f, 0.25f, 0.29f, 1.00f));
                    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.28f, 0.56f, 1.00f, 1.00f));
                    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.20f, 0.25f, 0.29f, 1.00));
                    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 4.0f);
                    if (imguitabs) {
                        if (ImGui::BeginTabItem(x.name.c_str()))
                        {
                            id = x.id;
                            ImGui::EndTabItem();
                        }
                    }
                    else {
                        if (sameline) {
                            ImGui::SetCursorPosY(5);
                        }
                        if (ImGui::Button(x.name.c_str(), ImVec2(250 / 2.5 - 9, 25)))
                            id = x.id;
                        if (sameline) {
                            ImGui::SameLine();
                        }
                    }
                    ImGui::PopStyleColor();
                    ImGui::PopStyleColor();
                    ImGui::PopStyleColor();
                    ImGui::PopStyleVar();

                }
            }
            if (imguitabs) {
                ImGui::EndTabBar();
            }
        }
    };

    tabitem createtab(string name, int id) {
        tabitem temp;
        temp.id = id;
        temp.name = name;
        return temp;
    }
};
