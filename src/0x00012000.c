/* Brute Force original Xbox: FUN_00012000, entry 0x00012000
 * Original body SHA-256: CC4EDD09EF3836CDAFF6F647B64566BFACBAE0E2B722ED4CF9691E99BF36B8F3
 * Evidence: original XBE disassembly, 0x00012000..0x00012042.
 * STATUS: C11 register/stack model, syntax checked; ABI_UNVERIFIED,
 *         callee behavior UNVERIFIED, not an original implementation.
 */
#include <stdint.h>
#include <stddef.h>
#include <string.h>

typedef struct BF_12000_CallBuffer {
    uint32_t input_ecx;      /* [esp+0x00] : mov [esp], ecx */
    uint32_t input_edx;      /* [esp+0x04] : mov [esp+4], edx */
    uint32_t from_eax_50_a;  /* [esp+0x08] */
    uint32_t from_eax_50_b;  /* [esp+0x0c] */
    uint32_t zero_a;         /* [esp+0x10] */
    uint32_t stack_arg_1;    /* [esp+0x14] : original entry [esp+4] */
    uint32_t zero_b;         /* [esp+0x18] */
    uint32_t stack_arg_2;    /* [esp+0x1c] : original entry [esp+8] */
} BF_12000_CallBuffer;
_Static_assert(sizeof(BF_12000_CallBuffer) == 32, "original 32-byte stack region");
_Static_assert(offsetof(BF_12000_CallBuffer, stack_arg_2) == 28, "observed stack offset");

/* The callee 0x000E4190 ends in ret 8. The full ABI and return contract
 * need interprocedural analysis. This is a placeholder declaration only. */
#if defined(__i386__)
# define BF_X86_STDCALL __attribute__((stdcall))
#elif defined(_M_IX86)
# define BF_X86_STDCALL __stdcall
#else
# define BF_X86_STDCALL
#endif
extern uint32_t BF_X86_STDCALL FUN_000e4190(uint32_t object_address,
                                              const BF_12000_CallBuffer *buffer);

/* Explicit register parameters are MODEL INPUTS. The original function
 * consumes EAX/ECX/EDX as registers, has two incoming stack arguments and
 * ends with ret 8. This C signature is NOT binary-call compatible. */
void BF_00012000_C11_draft(uint32_t stack_arg_1,
                           uint32_t stack_arg_2,
                           uint32_t incoming_eax,
                           uint32_t incoming_ecx,
                           uint32_t incoming_edx)
{
    uint32_t loaded_value;
    BF_12000_CallBuffer call_buffer;
    memcpy(&loaded_value,
           (const void *)((uintptr_t)incoming_eax + (uintptr_t)0x50),
           sizeof loaded_value);
    call_buffer.input_ecx = incoming_ecx;
    call_buffer.input_edx = incoming_edx;
    call_buffer.from_eax_50_a = loaded_value;
    call_buffer.from_eax_50_b = loaded_value;
    call_buffer.zero_a = 0;
    call_buffer.stack_arg_1 = stack_arg_1;
    call_buffer.zero_b = 0;
    call_buffer.stack_arg_2 = stack_arg_2;
    (void)FUN_000e4190(incoming_eax, &call_buffer);
}
