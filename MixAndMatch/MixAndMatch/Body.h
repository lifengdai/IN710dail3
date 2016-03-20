#pragma once
#include "BodyParts.h"
class Body : public BodyParts
{
private:
	// Inherited via BodyParts
	virtual pair<string, gcroot<Bitmap^>> cratePair(string, gcroot<Bitmap^>) override;
	virtual void addParts() override;
	virtual gcroot<Bitmap^> createBitmap(string) override;

public:
	Body();
	~Body();
};

