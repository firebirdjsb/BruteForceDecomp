/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACC1923A2243F443A9733C014C494A35139AF9E2A73CD72EC9F740C3E3156601
 * Entry: 0x000debc0, Ghidra index: 2723, label: FUN_000debc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00176f70(void);
extern void FUN_00176b80(void);
extern void FUN_001773b0(void);

undefined4 FUN_000debc0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*unaff_ESI + 0x20))();
  if (iVar1 == 7) {
    iVar1 = FUN_002ea01d(0x7c);
    if (iVar1 != 0) {
      uVar2 = FUN_00176f70();
      return uVar2;
    }
  }
  else if (iVar1 == 10) {
    iVar1 = FUN_002ea01d(0x90);
    if (iVar1 != 0) {
      uVar2 = FUN_00176b80();
      return uVar2;
    }
  }
  else if (iVar1 == 0xe) {
    iVar1 = FUN_002ea01d(0x7c);
    if (iVar1 != 0) {
      uVar2 = FUN_001773b0();
      return uVar2;
    }
  }
  return 0;
}
