/* register_types.cpp */

#include <core/class_db.h>

#include "register_types.h"

#include "entity.h"
#include "component.h"
#include "system.h"
#include "entity_manager.h"
#include "component_manager.h"
#include "manager.h"

void register_ecs_types() {
	//ClassDB::register_class<ECS_Component>();
	//ClassDB::register_class<ECS_Transform2DComponent>();
	//ClassDB::register_class<ECS_Sprite2DComponent>();
	//ClassDB::register_class<ECS_SineMover2DComponent>();
	//ClassDB::register_class<ECS_System>();
	//ClassDB::register_class<ECS_RenderSystem>();
	//Due to the amount of errors, were gonna create this in godot and its all contained in this ECS_EntityManager
	ClassDB::register_class<ECS_EntityManager>();

}

void unregister_ecs_types() {

	Engine *e = Engine::get_singleton();
	// Nothing to do here in this example.
}
