/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84DEC891EA57464231513F7AE545A4B3CFDC1DECFB7963D5CFDDE32A2576203A
 * Entry: 0x0015fef0, Ghidra index: 4583, label: FUN_0015fef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015fef0(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    switch(*(undefined4 *)(in_EAX + 8)) {
    case 4:
      FUN_00160050();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    case 6:
      FUN_00160180();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    case 7:
    case 9:
    case 0x11:
    case 0x12:
    case 0x1c:
      FUN_00160220();
    case 1:
    case 2:
    case 3:
    case 5:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1b:
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    case 0xd:
    case 0xe:
      FUN_001602c0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    case 0xf:
    case 0x10:
      FUN_00160320();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    case 0x13:
      FUN_001604c0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    case 0x14:
      FUN_00160000(1);
      return;
    }
  }
  return;
}
