#ifndef VKGRAPH_H
#define VKGRAPH_H
#include "visualobject.h"

class VkGraph  : public VisualObject {
public:
    VkGraph();
    VkGraph(const std::string &filename);
};

#endif // VKGRAPH_H
