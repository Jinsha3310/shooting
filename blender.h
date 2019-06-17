#pragma once
#include <D3D11.h>

class Blender 
{
public :
	enum BLEND_MODE
	{
		NONE = 0,	//	‡¬–³‚µ
		ALPHA,		//	ƒ¿‡¬	
		ADD,		//	‰ÁZ‡¬
		SUBTRACT,	//	Œ¸Z‡¬
		REPLACE,	//	’u‚«Š·‚¦
		MULTIPLY,	//	æZ
		LIGHTEN,	//	”äŠr(–¾)
		DARKEN,		//	”äŠr(ˆÃ)
		SCREEN,		//	ƒXƒNƒŠ[ƒ“

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