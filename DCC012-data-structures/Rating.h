#pragma once
class Rating
{
private:
	int userId;
	int movieId;
	float rating;
	int timestamp;

public:
	Rating(int userId, int movieId, float rating, int timestamp);
	Rating();
	~Rating();
	int getUserId();
	int getMovieId();
	float getRating();
	int getTimestamp();
};


Rating::Rating(int userId, int movieId, float rating, int timestamp)
{
	this->userId = userId;
	this->movieId = movieId;
	this->rating = rating;
	this->timestamp = timestamp;
}

Rating::Rating() {
}

Rating::~Rating()
{
}

inline int Rating::getUserId()
{
	return this->userId;
}

inline int Rating::getMovieId()
{
	return this->movieId;
}

inline float Rating::getRating()
{
	return this->rating;
}

inline int Rating::getTimestamp()
{
	return this->timestamp;
}

