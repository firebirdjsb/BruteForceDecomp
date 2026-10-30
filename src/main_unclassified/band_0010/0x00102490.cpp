/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC73BD2DED65E3EAC478A4E1CFE81D0A276D60BD85E7A4A094E320F5CCF223BB
 * Entry: 0x00102490, Ghidra index: 3270, label: FUN_00102490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
extern uint32_t PTR_FUN_0039e358;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_00102490(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039e358;
  if (in_ECX[0x1d] != 0) {
    (**(code **)(*DAT_00469944 + 0x14))(in_ECX[0x1d]);
    in_ECX[0x1d] = 0;
  }
  in_ECX[0x1c] = 0xffffffff;
  FUN_00178640();
  *in_ECX = &PTR_LAB_0039e5c8;
  FUN_000ef7f0();
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}
