// SynTHBloK-GrainForge: registers this plugin's modules.
#include "plugin.hpp"

Plugin* pluginInstance;

extern Model* modelSynTHBloKGrainForge;

void init(Plugin* p) {
    pluginInstance = p;
    p->addModel(modelSynTHBloKGrainForge);
}
