/* component_manager.cpp */

#include "component_manager.h"
#include <scene/main/viewport.h> //used to get mouse position in _process(float)
/*
//https://medium.com/@savas/nomad-game-engine-part-4-1-generic-component-managers-dbe376f10836 for all
template <class ComponentType>
void ECS_ComponentManager<ComponentType>::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "entity"), &ECS_ComponentManager<ComponentType>::add);
	ClassDB::bind_method(D_METHOD("lookup", "entity"), &ECS_ComponentManager<ComponentType>::lookup);
	ClassDB::bind_method(D_METHOD("destroy", "entity"), &ECS_ComponentManager<ComponentType>::destroy);
}

template <class ComponentType>
ComponentType* ECS_ComponentManager<ComponentType>::add(ECS_Entity e) {
	entityMap[e] = ComponentType();
	return &m_EntityMap[e];
}

template <class ComponentType>
ComponentType *ECS_ComponentManager<ComponentType>::lookup(ECS_Entity e) {
	return m_EntityMap[e];
}

template <class ComponentType>
void ECS_ComponentManager<ComponentType>::destroy(ECS_Entity e) {
	m_EntityMap.erase(e);
}
*/
