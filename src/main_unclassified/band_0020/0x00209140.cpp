/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4102AC805D3BE2DB25FECAD6918319215C3F0AED6F23DDA3F4B1E7169DF28EA
 * Entry: 0x00209140, Ghidra index: 7320, label: FUN_00209140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395838;
extern uint32_t PTR_LAB_003957e4;
extern uint32_t PTR_LAB_003957f4;
extern uint32_t PTR_LAB_0039580c;
extern uint32_t PTR_LAB_0039581c;
void FUN_00209140(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_00395838;
  in_ECX[2] = PTR_LAB_0039581c;
  in_ECX[3] = PTR_LAB_0039580c;
  in_ECX[0x10] = PTR_LAB_003957f4;
  in_ECX[0x11] = PTR_LAB_003957e4;
  puVar1 = (undefined4 *)in_ECX[0x3d];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000e1150(in_ECX + 0x3c,local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x3d]);
}
