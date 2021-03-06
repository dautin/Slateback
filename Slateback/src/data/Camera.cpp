#include <iostream>

#include "Camera.h"

void Camera::SetModel(std::string model)
{
	m_Model = model;
}

void Camera::SetFilmBack(std::string filmback)
{
	m_FilmBack = filmback;
}

void Camera::SetCodec(std::string codec)
{
	m_Codec = codec;
}

void Camera::SetID(std::string id)
{
	m_ID = id;
}

void Camera::SetLensSet(std::string lenses)
{
	m_LensSet = lenses;
}

std::string Camera::GetModel()
{
	return m_Model;
}

std::string Camera::GetFilmBack()
{
	return m_FilmBack;
}

std::string Camera::GetCodec()
{
	return m_Codec;
}

std::string Camera::GetID()
{
	return m_ID;
}

std::string Camera::GetLensSet()
{
	return m_LensSet;
}

void Camera::PushNewRoll(Roll* roll)
{
	m_Rolls.push_back(roll);
}

Roll* Camera::GetRoll(unsigned int index)
{
	return m_Rolls[index];
}

unsigned int Camera::GetRollCount()
{
	return m_Rolls.size();
}

void Camera::SetCameraOperator(std::string camop)
{
	m_CameraOperator = camop;
}

void Camera::SetFirstAssistantCamera(std::string firstAC)
{
	m_FirstAssistantCamera = firstAC;
}

void Camera::SetSecondAssistantCamera(std::string secondAC)
{
	m_SecondAssistantCamera = secondAC;
}

std::string Camera::GetCameraOperator()
{
	return m_CameraOperator;
}

std::string Camera::GetFirstAssistantCamera()
{
	return m_FirstAssistantCamera;
}

std::string Camera::GetSecondAssistantCamera()
{
	return m_SecondAssistantCamera;
}