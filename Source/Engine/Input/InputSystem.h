#pragma once
#include <SDL2-2.28.0/include/SDL.h>
#include <array>
#include <vector>
#include <Core/core.h>

namespace kiko
{
	class InputSystem
	{
	public:
		InputSystem() = default;
		~InputSystem() = default;
		bool Initialize();
		void Shutdown();
		void Update();
		bool GetKeyDown(uint32_t key) const { return m_keyboardState[key]; }
		bool GetPreviousKeyDown(uint32_t key) const { return m_prevKeyboardState[key]; }
	private:
		std::vector<uint8_t> m_keyboardState;
		std::vector<uint8_t> m_prevKeyboardState;
	};
}