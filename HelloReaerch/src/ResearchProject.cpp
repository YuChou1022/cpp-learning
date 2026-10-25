#include "ResearchProject.h"
#include <stdexcept>

ResearchProject::ResearchProject(
    const std::string& id,
    const std::string& title,
    const std::string& researchQuestion
)
    : id_(id),
    title_(title),
    researchQuestion_(researchQuestion),
    status_(ProjectStatus::Active)
{
    if (id_.empty())
    {
        throw std::invalid_argument("Project ID cannot be empty");
    }

    if (title_.empty())
    {
        throw std::invalid_argument("Project title cannot be empty");
    }
}

const std::string& ResearchProject::id() const noexcept
{
    return id_;
}

const std::string& ResearchProject::title() const noexcept
{
    return title_;
}

const std::string& ResearchProject::researchQuestion() const noexcept
{
    return researchQuestion_;
}

ProjectStatus ResearchProject::status() const noexcept
{
    return status_;
}

bool ResearchProject::rename(const std::string& newTitle)
{
    if (newTitle.empty())
    {
        return false;
    }

    title_ = newTitle;
    return true;
}

bool ResearchProject::pause() noexcept
{
    if (status_ != ProjectStatus::Active)
    {
        return false;
    }

    status_ = ProjectStatus::Paused;
    return true;
}

bool ResearchProject::resume() noexcept
{
    if (status_ != ProjectStatus::Paused)
    {
        return false;
    }

    status_ = ProjectStatus::Active;
    return true;
}

void ResearchProject::complete() noexcept
{
    status_ = ProjectStatus::Completed;
}