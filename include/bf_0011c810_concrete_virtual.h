/* Authenticated original XBE concrete subobject vtable +0x30 call boundary.
 * Constructor 0x00110DED writes 0x0039DCE8 to [argument+0x1B4]; its
 * +0x30 method pointer is 0x0010FBF0. That original method returns the
 * pushed output-buffer guest pointer in EAX and ends RET 4 (0x0010FC6C).
 *
 * The scalar-producing method body performs x87 operations and RSQRTSS.
 * It is not simulated here. A caller MUST provide the actual scalar body
 * implementation; the virtual executor refuses any other method address
 * or missing body and only returns EAX/ESP AFTER the body succeeds.
 * Runtime vtable mutation and alternative target ABIs are not inferred.
 */
#ifndef BF_0011C810_CONCRETE_VIRTUAL_H
#define BF_0011C810_CONCRETE_VIRTUAL_H
#include "bf_0011c810_virtual_call_link.h"
#define BF_0011C810_CONCRETE_VTABLE UINT32_C(0x0039dce8)
#define BF_0011C810_CONCRETE_METHOD UINT32_C(0x0010fbf0)

typedef bool (*bf_0011c810_concrete_scalar_executor)(
    void *context, const bf_0011c810_guest_bytes *io,
    uint32_t guest_receiver_ecx, uint32_t guest_output_va);
typedef struct bf_0011c810_concrete_context {
    const bf_0011c810_guest_bytes *io;
    bf_0011c810_concrete_scalar_executor scalar;
    void *scalar_context;
} bf_0011c810_concrete_context;

static inline bool bf_0011c810_concrete_virtual_executor(
    void *context, const bf_0011c810_virtual_request *req,
    bf_0011c810_virtual_response *response)
{
    const bf_0011c810_concrete_context *c=context;
    if (!c || !c->io || !c->io->read || !c->io->write || !c->scalar ||
        !req || !response || req->method_guest_va!=BF_0011C810_CONCRETE_METHOD)
        return false;
    if (!c->scalar(c->scalar_context,c->io,req->receiver_ecx,
                   req->argument_guest_va))
        return false;
    response->eax_after_return=req->argument_guest_va;
    response->esp_after_return=req->guest_esp_s;
    return true;
}
#endif
