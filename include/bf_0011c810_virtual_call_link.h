/* 0x0011C810 indirect +0x30 guest call-site descriptor and source linkage.
 * This is an observable DATAFLOW model at the original call boundaries,
 * not a synthesized vtable implementation or original x86 CALL/RET ABI.
 * The real virtual target, EAX return and guest ESP after execution must be
 * supplied by the guest execution engine's callback. No host pointer is
 * fabricated from a guest DWORD, and original game sources are not edited.
 */
#ifndef BF_0011C810_VIRTUAL_CALL_LINK_H
#define BF_0011C810_VIRTUAL_CALL_LINK_H
#include "bf_0011c810_guest_producer_bridge.h"
#include <stdint.h>
#include <stdbool.h>

typedef enum bf_0011c810_virtual_kind {
    BF_0011C810_FIRST_VIRTUAL = 0,
    BF_0011C810_SECOND_VIRTUAL = 1
} bf_0011c810_virtual_kind;
typedef struct bf_0011c810_virtual_request {
    uint32_t method_guest_va;     /* DWORD [DWORD [argument+0x1B4]+0x30] */
    uint32_t receiver_ecx;        /* original ECX: argument+0x1B4 */
    uint32_t argument_guest_va;   /* original pushed DWORD: S+0x28 or S+0x1C */
    uint32_t guest_esp_s;         /* S after SUB ESP,0x88; PUSH ESI */
    uint32_t guest_esp_after_argument_push; /* S-4 (descriptor, no write) */
} bf_0011c810_virtual_request;
typedef struct bf_0011c810_virtual_response {
    uint32_t eax_after_return;
    uint32_t esp_after_return;
} bf_0011c810_virtual_response;
/* The callback owns actual guest CALL/RET execution, writes to pushed-arg
 * storage and all original register/flag effects. False means no usable return.
 * This adapter only checks the caller-visible EAX and ESP postconditions. */
typedef bool (*bf_0011c810_virtual_executor)(void *context,
    const bf_0011c810_virtual_request *request,
    bf_0011c810_virtual_response *response);
typedef enum bf_0011c810_virtual_status {
    BF_0011C810_VIRTUAL_OK = 0,
    BF_0011C810_VIRTUAL_INVALID_ARGUMENT,
    BF_0011C810_VIRTUAL_READ_FAULT,
    BF_0011C810_VIRTUAL_CALL_UNRESOLVED,
    BF_0011C810_VIRTUAL_ESP_NOT_RESTORED,
    BF_0011C810_VIRTUAL_PRODUCER_ERROR
} bf_0011c810_virtual_status;
typedef struct bf_0011c810_virtual_result {
    bf_0011c810_virtual_status status;
    uint32_t fault_guest_va;
    bf_0011c810_virtual_request request;
    bf_0011c810_virtual_response response;
    bf_0011c810_bridge_result producer;
} bf_0011c810_virtual_result;

/* Read an Xbox little-endian DWORD. The backend handles wrapping/faults of
 * its access extent; only the starting address is calculated modulo 2^32. */
static inline bool bf_0011c810_load_guest_u32(
    const bf_0011c810_guest_bytes *io,uint32_t addr,uint32_t *out)
{
    unsigned char bytes[4];
    if (!io->read(io->user,addr,bytes,4)) return false;
    *out=(uint32_t)bytes[0] | ((uint32_t)bytes[1]<<8) |
         ((uint32_t)bytes[2]<<16) | ((uint32_t)bytes[3]<<24);
    return true;
}

/* The subsequent frame accesses require the virtual call to have restored
 * ESP to S. The target's cleanup opcode is NOT inferred from this assertion.
 * The callback handles any guest stack writes/return address and the target's
 * real semantics; its returned EAX is never defaulted to a guessed value. */
static inline bf_0011c810_virtual_result bf_0011c810_dispatch_virtual(
    const bf_0011c810_guest_bytes *io,uint32_t caller_argument,
    uint32_t guest_esp_s,bf_0011c810_virtual_kind kind,
    bf_0011c810_virtual_executor executor,void *executor_context)
{
    bf_0011c810_virtual_result r={BF_0011C810_VIRTUAL_OK};
    r.status=BF_0011C810_VIRTUAL_INVALID_ARGUMENT;
    r.producer.status=BF_0011C810_INVALID_IO;
    if (!io || !io->read || !io->write || !executor ||
        (kind!=BF_0011C810_FIRST_VIRTUAL && kind!=BF_0011C810_SECOND_VIRTUAL))
        return r;
    r.request.receiver_ecx=caller_argument+UINT32_C(0x1b4);
    r.request.guest_esp_s=guest_esp_s;
    r.request.guest_esp_after_argument_push=guest_esp_s-4u;
    r.request.argument_guest_va=guest_esp_s+
         (kind==BF_0011C810_FIRST_VIRTUAL?UINT32_C(0x28):UINT32_C(0x1c));
    uint32_t vtable;
    if (!bf_0011c810_load_guest_u32(io,r.request.receiver_ecx,&vtable)) {
        r.status=BF_0011C810_VIRTUAL_READ_FAULT;
        r.fault_guest_va=r.request.receiver_ecx;
        return r;
    }
    if (!bf_0011c810_load_guest_u32(io,vtable+UINT32_C(0x30),
                                   &r.request.method_guest_va)) {
        r.status=BF_0011C810_VIRTUAL_READ_FAULT;
        r.fault_guest_va=vtable+UINT32_C(0x30);
        return r;
    }
    if (!executor(executor_context,&r.request,&r.response)) {
        r.status=BF_0011C810_VIRTUAL_CALL_UNRESOLVED;
        return r;
    }
    if (r.response.esp_after_return!=guest_esp_s) {
        r.status=BF_0011C810_VIRTUAL_ESP_NOT_RESTORED;
        return r;
    }
    r.status=BF_0011C810_VIRTUAL_OK;
    return r;
}

/* This is the first virtual call only. The returned EAX is now connected to
 * the actual source-linked 0x0001D0C0 producer and 36-byte matrix copy.
 * The later virtual result/vector stores and 0x0012B2A0 consumer remain
 * independently sequenced by the caller, not silently inferred here. */
static inline bf_0011c810_virtual_result bf_0011c810_first_virtual_to_matrix(
    const bf_0011c810_guest_bytes *io,uint32_t caller_argument,
    uint32_t guest_esp_s,bf_0011c810_virtual_executor executor,
    void *executor_context)
{
    bf_0011c810_virtual_result r=bf_0011c810_dispatch_virtual(
        io,caller_argument,guest_esp_s,BF_0011C810_FIRST_VIRTUAL,
        executor,executor_context);
    if (r.status!=BF_0011C810_VIRTUAL_OK) return r;
    r.producer=bf_0011c810_source_matrix(io,guest_esp_s,
                                          r.response.eax_after_return);
    if (r.producer.status!=BF_0011C810_COPIED) {
        r.status=BF_0011C810_VIRTUAL_PRODUCER_ERROR;
        r.fault_guest_va=r.producer.fault_guest_va;
    }
    return r;
}
#endif
