BEGIN TRANSACTION;

DROP TABLE IF EXISTS users;
DROP TABLE IF EXISTS animals;

CREATE TABLE IF NOT EXISTS users (
	userid TEXT PRIMARY KEY,
	password TEXT
);

CREATE TABLE IF NOT EXISTS animals (
	name TEXT PRIMARY KEY,
	species TEXT,
	breed TEXT,
	weight TEXT, --kg
	height TEXT, --ft
	colour TEXT
);

INSERT OR REPLACE INTO users VALUES ('name', 'password');

INSERT OR REPLACE INTO animals VALUES ('Bloo','dog','rottweiler','55','2.5','black');

END TRANSACTION;
