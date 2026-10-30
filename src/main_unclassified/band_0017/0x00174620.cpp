/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E948ADB614919C83AE90FCFC585C6DC883AF2C9BC8B9F737BE7C566007873FC
 * Entry: 0x00174620, Ghidra index: 4913, label: FUN_00174620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a0a8;
extern uint32_t PTR_FUN_0039a0c0;
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_FUN_0039a714;
extern uint32_t PTR_FUN_0039af70;
extern uint32_t PTR_LAB_0039a05c;
extern uint32_t PTR_LAB_0039a060;
extern uint32_t PTR_LAB_0039a074;
extern uint32_t PTR_LAB_0039a090;
extern uint32_t PTR_LAB_0039a0c8;
extern uint32_t PTR_LAB_0039a0dc;
extern uint32_t PTR_LAB_0039a0f8;
void FUN_00174620(void)

{
  undefined4 in_EAX;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  in_EDX[3] = 0;
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  in_EDX[1] = PTR_FUN_0039a348;
  in_EDX[0x18] = PTR_FUN_0039af70;
  in_EDX[0x19] = PTR_FUN_0039a6e0;
  in_EDX[0x17] = PTR_LAB_0039a0f8;
  in_EDX[0x18] = PTR_LAB_0039a0dc;
  in_EDX[0x19] = PTR_LAB_0039a0c8;
  in_EDX[0x1a] = 1;
  in_EDX[0x1b] = PTR_FUN_0039a714;
  *in_EDX = PTR_FUN_0039a0c0;
  in_EDX[1] = PTR_FUN_0039a0a8;
  in_EDX[0x17] = PTR_LAB_0039a090;
  in_EDX[0x18] = PTR_LAB_0039a074;
  in_EDX[0x19] = PTR_LAB_0039a060;
  in_EDX[0x1b] = PTR_LAB_0039a05c;
  in_EDX[0x1e] = 0;
  in_EDX[0x24] = 0;
  in_EDX[0x26] = 0;
  in_EDX[0x27] = 0;
  in_EDX[0x28] = 0;
  in_EDX[0x2d] = 0;
  in_EDX[0x2f] = 0;
  in_EDX[0x31] = 0;
  in_EDX[0x32] = 0;
  in_EDX[0x33] = 0;
  in_EDX[0x1c] = in_EAX;
  *(undefined1 *)(in_EDX + 0x1f) = 0;
  in_EDX[0x1e] = *in_ECX;
  FUN_001745c0();
  in_EDX[0x20] = 0;
  in_EDX[0x21] = 1;
  in_EDX[0x22] = 0;
  in_EDX[0x14] = 0;
  FUN_0005d2f0();
  FUN_00175300();
  return;
}
