#include "bf_0011c810_original_vector_lanes.h"
#include "bf_0011c810_concrete_virtual.h"
int original_0011c810_vector_signature(const bf_0011c810_guest_bytes *io,
                                      uint32_t address,const uint32_t words[3])
{
    uint32_t fault=0;
    return bf_0011c810_original_vector_lanes(0,io,address,words,&fault);
}

int original_0010fbf0_method_signature(
     const bf_0011c810_virtual_request *request, const bf_0011c810_concrete_context *context)
{
    bf_0011c810_virtual_response response={0};
    return bf_0011c810_concrete_virtual_executor((void*)context,request,&response);
}
