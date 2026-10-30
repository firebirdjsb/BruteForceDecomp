/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAA61A9B6EF84FB8CC2870D3BDD098FD2B7310250E877AEFAF821ECD69F04CFF
 * Entry: 0x001fd8b0, Ghidra index: 7202, label: FUN_001fd8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396238;
extern uint32_t PTR_FUN_0039a828;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_LAB_003961e4;
extern uint32_t PTR_LAB_003961f4;
extern uint32_t PTR_LAB_0039620c;
extern uint32_t PTR_LAB_0039621c;
void FUN_001fd8b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00396238;
  in_ECX[2] = PTR_LAB_0039621c;
  in_ECX[3] = PTR_LAB_0039620c;
  in_ECX[0x10] = PTR_LAB_003961f4;
  in_ECX[0x11] = PTR_LAB_003961e4;
  if (in_ECX[0x2d] != 0) {
    FUN_0001d590(in_ECX + 0x2c);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x2d]);
  }
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x10] = &PTR_FUN_0039c2a0;
  in_ECX[0x11] = &PTR_FUN_0039a828;
  FUN_001fe150();
  return;
}
