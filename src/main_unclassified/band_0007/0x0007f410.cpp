/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADD1FE30D828A89E3A1AE66DB2957500F3E26907D3EFADA7215BCA04C078AF80
 * Entry: 0x0007f410, Ghidra index: 1500, label: FUN_0007f410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dd4c;
extern char s__s____0040dc14[];
void FUN_0007f410(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined1 local_348 [260];
  undefined1 local_244 [320];
  undefined1 local_104 [260];
  
  FUN_002eaa19(local_104,0x104,s__s____0040dc14);
  iVar1 = FUN_002f46db(local_104,local_244);
  if (iVar1 != -1) {
    do {
      FUN_002eaa19(local_348,0x104,&DAT_0040dd4c);
      FUN_002f2fcb(local_348,0x80);
      FUN_002f30bc(local_348);
      iVar2 = FUN_002f47e8(iVar1,local_244);
    } while (iVar2 != 0);
    XAPILIB__CloseHandle(iVar1);
  }
  FUN_002f48a5(unaff_EDI);
  return;
}
