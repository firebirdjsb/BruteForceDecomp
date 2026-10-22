/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C138DCD3E99911953511F0995B1C1F07FD8A6498E247D3FD1C358B6F80366E00
 * Entry: 0x00272230, Ghidra index: 8831, label: FUN_00272230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392560;
void FUN_00272230(void)

{
  undefined4 *in_EAX;
  undefined4 unaff_EBX;
  
  FUN_002710e0(in_EAX,unaff_EBX);
  *in_EAX = &PTR_FUN_00392560;
  in_EAX[0x41] = 0;
  in_EAX[0x40] = 0;
  in_EAX[0x3e] = 0x43340000;
  in_EAX[0x3f] = 1;
  in_EAX[0x3d] = 0x447a0000;
  in_EAX[0x3a] = 0;
  in_EAX[0x3b] = 0;
  in_EAX[0x3c] = 0x3f800000;
  in_EAX[0x37] = 0xff;
  in_EAX[0x38] = 0xff;
  in_EAX[0x39] = 0xff;
  FUN_002724a0(unaff_EBX);
  FUN_002723c0();
  FUN_00271330();
  FUN_00271430(in_EAX,in_EAX + 0x26,in_EAX + 0x15);
  return;
}
