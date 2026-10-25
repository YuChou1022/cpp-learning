BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS experiments (
id INTEGER PRIMARY KEY,
project_id INTEGER NOT NULL,
title TEXT NOT NULL,
conclusion TEXT,
FOREIGN KEY (project_id)
    REFERENCES research_projects(id)
);
CREATE TABLE IF NOT EXISTS research_projects(
id INTEGER PRIMARY KEY,
title TEXT NOT NULL,
status TEXT NOT NULL DEFAULT 'ACTIVE'
, created_at TEXT);
INSERT INTO "experiments" ("id","project_id","title","conclusion") VALUES (1,1,'EXP-001：自然对话测试','模型容易重复提问'),
 (2,1,'EXP-002：受限通信测试','需要进一步分析'),
 (3,2,'EXP-003：数据库Demo','正在学习SQLite');
INSERT INTO "research_projects" ("id","title","status","created_at") VALUES (1,'LLM通信实验','ACTIVE','2026-10-19 18:57:34'),
 (2,'ResearchOS开发','ACTIVE','2026-10-19 18:57:34'),
 (3,'SQLite学习实验','Active','2026-10-19 19:35:11');
COMMIT;
