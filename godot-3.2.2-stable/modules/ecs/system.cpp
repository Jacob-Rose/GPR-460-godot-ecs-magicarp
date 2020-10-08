/* system.cpp */

#include "system.h"
#include <scene/main/viewport.h> //used to get mouse position in _process(float)
#include "component_manager.h"
#include "entity_manager.h"

void ECS_System::_bind_methods() {

}

void ECS_System::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_PROCESS:
			_process(get_process_delta_time()); //this is called each frame like Update() in Unity
			break;
		case NOTIFICATION_DRAW:
			_draw();
	}
}

ECS_System::ECS_System() {
	set_process(true);
}

void ECS_System::_process(float delta)
{
	//what, _process can run in editor too, we need to specify not to run in editor here
	if(!Engine::get_singleton()->is_editor_hint()) {
		
	}
}

void ECS_System::_draw() {
}

ECS_RenderSystem::ECS_RenderSystem() {
}

void ECS_RenderSystem::_process(float delta) {
	
}

void ECS_RenderSystem::_draw() {
	
	
}

ECS_SineMoveSystem::ECS_SineMoveSystem() {
}

void ECS_SineMoveSystem::_process(float delta) {
	Engine *e = Engine::get_singleton();

}
