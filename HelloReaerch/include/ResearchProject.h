#pragma once

#include <string>

enum class ProjectStatus
{
    Active,
    Paused,
    Completed
};

class ResearchProject
{
public:
    ResearchProject(
        const std::string& id,
        const std::string& title,
        const std::string& researchQuestion
    );

    const std::string& id() const noexcept;
    const std::string& title() const noexcept;
    const std::string& researchQuestion() const noexcept;

    ProjectStatus status() const noexcept;

    bool rename(const std::string& newTitle);

    bool pause() noexcept;
    bool resume() noexcept;
    void complete() noexcept;

private:
    std::string id_;
    std::string title_;
    std::string researchQuestion_;

    ProjectStatus status_ = ProjectStatus::Active;
};