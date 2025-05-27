#pragma once

struct vulkanInstance
{
	VkInstance instance;
	bool swapchainMaintenance1DependenciesSupported;
};

vulkanInstance createInstance();
VkDebugReportCallbackEXT registerDebugCallback(VkInstance instance);

uint32_t getGraphicsFamilyIndex(VkPhysicalDevice physicalDevice);
VkPhysicalDevice pickPhysicalDevice(VkPhysicalDevice* physicalDevices, uint32_t physicalDeviceCount);

VkDevice createDevice(VkInstance instance, VkPhysicalDevice physicalDevice, uint32_t familyIndex, bool meshShadingSupported, bool raytracingSupported, bool clusterrtSupported, bool swapchainMaintenance1Supported);
