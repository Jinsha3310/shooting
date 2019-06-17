#pragma once
#include <D3D11.h>

class Blender 
{
public :
	enum BLEND_MODE
	{
		NONE = 0,	//	��������
		ALPHA,		//	������	
		ADD,		//	���Z����
		SUBTRACT,	//	���Z����
		REPLACE,	//	�u������
		MULTIPLY,	//	��Z
		LIGHTEN,	//	��r(��)
		DARKEN,		//	��r(��)
		SCREEN,		//	�X�N���[��

		MODE_MAX
	};
private :
	static ID3D11BlendState* blend_state[MODE_MAX];
	static bool				 load;
	static BLEND_MODE		 nowMode;
public :
	static void Initialize(ID3D11Device* device, ID3D11DeviceContext* context);
	static void Set(BLEND_MODE mode, ID3D11DeviceContext* context);
	static void Release();
};