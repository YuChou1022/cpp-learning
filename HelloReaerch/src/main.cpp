#include <iostream>
#include "ResearchProject.h"

const char* statusName(ProjectStatus status)
{
    switch (status)
    {
    case ProjectStatus::Active:
        return "进行中";

    case ProjectStatus::Paused:
        return "已暂停";

    case ProjectStatus::Completed:
        return "已完成";
    }

    return "未知";
}

int main()
{
    ResearchProject project(
        "EXP-001",
        "LLM涌现通信实验",
        "受限通信能否促进协议形成？"
    );

    std::cout << project.title() << '\n';
    std::cout << statusName(project.status()) << '\n';

    project.pause();
    std::cout << statusName(project.status()) << '\n';

    project.resume();
    project.complete();

    std::cout << statusName(project.status()) << '\n';

    bool renamed = project.rename("");

    std::cout << "空名称修改成功？"
        << (renamed ? "是" : "否")
        << '\n';

    return 0;
}