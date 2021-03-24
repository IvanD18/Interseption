#include "Camera.h"

class Camera(ICamera)
{
	public:
	Camera(vector<float> p, vector<float> d, float angle_h, float angle_v)
	{
		viewPointer = p;
		direction = d;
		fov_v = angle_v;
		fov_h = angle_h;
		
		
	}

	
	void setView(vector<float> p)
	{
		viewPointer = p;
	}
	
	vector<float> getView()
	{
		return viewPointer;
	}
	
	void setFOV_H(float angle_h)
	{
		fov_h = angle_h;
	}
	
	float getFOV_H()
	{
		return fov_h;
	}
	
	void setFOV_V(float angle_v)
	{
		fov_v = angle_v;
	}
	
	float getFOV_V()
	{
		return fov_v;
	}
	
	
	void setDirection(vector<float> d)
	{
		direction = d;
	}
	
	vector<float> getDirection()
	{
		return direction;
	}
}