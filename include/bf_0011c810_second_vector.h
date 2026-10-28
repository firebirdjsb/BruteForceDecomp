/* Original 0x0011C810 second virtual +0x30 call: guest-memory read and
 * output-slot bridge. This deliberately DOES NOT guess the ordering of
 * object component words into the ECX vector at [S+0x28..S+0x33].
 * The original x86 binary is required to verify that lane permutation,
 * the actual negation instructions and their scalar exceptions. The input
 * vector is materialized by an explicit, externally verified callback.
 * No original Xbox virtual method, runtime ABI, or host guest-pointer cast.
 */
#ifndef BF_0011C810_SECOND_VECTOR_H
#define BF_0011C810_SECOND_VECTOR_H
#include "bf_0011c810_virtual_call_link.h"

typedef enum bf_0011c810_components_stage {
    BF_COMPONENTS_STAGE_NONE=0,
    BF_COMPONENTS_STAGE_OBJECT_POINTER,
    BF_COMPONENTS_STAGE_READ_1C,
    BF_COMPONENTS_STAGE_READ_28,
    BF_COMPONENTS_STAGE_READ_34
} bf_0011c810_components_stage;
typedef struct bf_0011c810_components_result {
    bf_0011c810_copy_status status;
    bf_0011c810_components_stage stage;
    uint32_t fault_guest_va;
    uint32_t object_guest_va;
    /* Raw original guest binary32 DWORD bits in address-offset order:
     * component_words[0]: +0x1C; [1]: +0x28; [2]: +0x34.
     * No float conversion, sign flip, or vector lane mapping here. */
    uint32_t component_words[3];
} bf_0011c810_components_result;

static inline bool bf_0011c810_store_guest_u32(
    const bf_0011c810_guest_bytes *io,uint32_t addr,uint32_t bits)
{
    const unsigned char bytes[4]={
        (unsigned char)bits,(unsigned char)(bits>>8),
        (unsigned char)(bits>>16),(unsigned char)(bits>>24)
    };
    return io->write(io->user,addr,bytes,4);
}

/* A is the explicit original function argument, not the virtual EAX.
 * The original C draft and previously authenticated x86 evidence agree on
 * the three source object offsets, but NOT the exact output lane mapping.
 * Read-order/faults here describe only a successful-state projection. */
static inline bf_0011c810_components_result bf_0011c810_read_components(
    const bf_0011c810_guest_bytes *io,uint32_t caller_argument)
{
    bf_0011c810_components_result r={0};
    r.status=BF_0011C810_INVALID_IO;
    if(!io||!io->read) return r;
    const uint32_t at=caller_argument+UINT32_C(0x6c);
    r.stage=BF_COMPONENTS_STAGE_OBJECT_POINTER;
    if(!bf_0011c810_load_guest_u32(io,at,&r.object_guest_va)) {
        r.status=BF_0011C810_READ_FAULT;
        r.fault_guest_va=at;
        return r;
    }
    const uint32_t offsets[3]={UINT32_C(0x1c),UINT32_C(0x28),UINT32_C(0x34)};
    for(unsigned i=0;i<3u;i++) {
        const uint32_t guest_va=r.object_guest_va+offsets[i];
        r.stage=(bf_0011c810_components_stage)(BF_COMPONENTS_STAGE_READ_1C+i);
        if(!bf_0011c810_load_guest_u32(io,guest_va,&r.component_words[i])) {
            r.status=BF_0011C810_READ_FAULT;
            r.fault_guest_va=guest_va;
            return r;
        }
    }
    r.status=BF_0011C810_COPIED;
    r.fault_guest_va=0;
    return r;
}

/* The real caller (or instruction-authenticated reconstruction) must supply
 * the guest-vector lane order, float negation, and any original side effects.
 * Callback receives unmodified guest DWORDs, then fills 12 bytes starting at
 * frame.helper_vec3 using the x86-supported mapping. False = not established
 * or guest fault; no default vector is invented. Tests use synthetic maps. */
typedef bool (*bf_0011c810_vector_stage_executor)(void *context,
    const bf_0011c810_guest_bytes *io,uint32_t vector_guest_va,
    const uint32_t component_words[3],uint32_t *fault_guest_va);

typedef enum bf_0011c810_second_status {
    BF_SECOND_OK=0,
    BF_SECOND_VIRTUAL_ERROR,
    BF_SECOND_COMPONENT_ERROR,
    BF_SECOND_VECTOR_UNRESOLVED,
    BF_SECOND_DOT_ERROR,
    BF_SECOND_READ_OUTPUT_ERROR
} bf_0011c810_second_status;
typedef struct bf_0011c810_second_result {
    bf_0011c810_second_status status;
    bf_0011c810_virtual_result virtual_call;
    bf_0011c810_components_result components;
    bf_0011c810_bridge_result dot;
    uint32_t scalar_first_bits;  /* helper writes [S+0x0C] */
    uint32_t scalar_third_bits;  /* helper writes [S+0x14] */
    uint32_t fault_guest_va;
} bf_0011c810_second_result;

/* Caller must already have filled the first virtual's copied 36-byte matrix.
 * Dispatch second virtual -> read distinct raw source component words ->
 * require verified vector stager -> call actual FUN_0012B2A0 via existing
 * host source bridge -> read the two observed downstream scalar lifetimes.
 * Does NOT implement the original branch decisions, x87 or signal-NaN rules. */
static inline bf_0011c810_second_result bf_0011c810_second_virtual_to_dot(
    const bf_0011c810_guest_bytes *io,uint32_t caller_argument,
    uint32_t guest_esp_s,bf_0011c810_virtual_executor executor,void *context,
    bf_0011c810_vector_stage_executor stager,void *stage_context)
{
    bf_0011c810_second_result r={0};
    r.virtual_call=bf_0011c810_dispatch_virtual(io,caller_argument,
         guest_esp_s,BF_0011C810_SECOND_VIRTUAL,executor,context);
    if(r.virtual_call.status!=BF_0011C810_VIRTUAL_OK) {
        r.status=BF_SECOND_VIRTUAL_ERROR;
        r.fault_guest_va=r.virtual_call.fault_guest_va;
        return r;
    }
    r.components=bf_0011c810_read_components(io,caller_argument);
    if(r.components.status!=BF_0011C810_COPIED) {
        r.status=BF_SECOND_COMPONENT_ERROR;
        r.fault_guest_va=r.components.fault_guest_va;
        return r;
    }
    r.status=BF_SECOND_VECTOR_UNRESOLVED;
    if(!stager) return r;
    const bf_0011c810_frame frame=bf_0011c810_frame_at(guest_esp_s);
    if(!stager(stage_context,io,frame.helper_vec3,
               r.components.component_words,&r.fault_guest_va)) return r;
    r.dot=bf_0011c810_dot_output(io,guest_esp_s);
    if(r.dot.status!=BF_0011C810_COPIED) {
        r.status=BF_SECOND_DOT_ERROR;
        r.fault_guest_va=r.dot.fault_guest_va;
        return r;
    }
    const uint32_t first=frame.helper_out3;
    const uint32_t third=frame.helper_out3+8u;
    if(!bf_0011c810_load_guest_u32(io,first,&r.scalar_first_bits)) {
        r.status=BF_SECOND_READ_OUTPUT_ERROR;
        r.fault_guest_va=first;
        return r;
    }
    if(!bf_0011c810_load_guest_u32(io,third,&r.scalar_third_bits)) {
        r.status=BF_SECOND_READ_OUTPUT_ERROR;
        r.fault_guest_va=third;
        return r;
    }
    r.status=BF_SECOND_OK;
    return r;
}
#endif
