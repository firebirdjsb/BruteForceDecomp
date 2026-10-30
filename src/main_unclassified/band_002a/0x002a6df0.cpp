/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E05D5FC2F130361C9336C263B5ACFE31937901C54D478A7C3B162C97607D331E
 * Entry: 0x002a6df0, Ghidra index: 9591, label: FUN_002a6df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_002a6990;
undefined4 FUN_002a6df0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *unaff_EDI;
  int **ppiStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined1 *puStack_44;
  int *piStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_14 [2];
  int iStack_c;
  
  uStack_24 = 0;
  uStack_28 = 4;
  puStack_2c = local_14;
  piStack_30 = param_2;
  local_14[0] = 0x3f99999a;
  uStack_34 = 0x2a6e12;
  (**(code **)(*param_2 + 0x14))();
  uStack_34 = 0;
  uStack_38 = 4;
  piStack_3c = (int *)(iStack_c + 4);
  piStack_40 = param_2;
  puStack_44 = (undefined1 *)0x2a6e23;
  (**(code **)(*param_2 + 0x14))();
  for (piVar1 = *(int **)(iStack_c + 0x14); piVar1 != (int *)0x0;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x38))(piVar1)) {
    /* XBE 0x002A6E30 LEA EDX,[ESP+0x28] after saving EBX/ESI/EDI:
     * ESP+0x28 is entry ESP+8, the second incoming guest DWORD.
     * PUSH EDX; PUSH EDI; CALL [ECX+0x84] writes through that address.
     * 0x002A6E40 then reloads [ESP+0x28] (the same guest argument).
     * This virtual method is NOT a no-argument call; native ABI TODO. */
    piStack_4c = (int *)0x2a6e40;
    piStack_48 = piVar1;
    (**(code **)(*piVar1 + 0x84))(piVar1,&param_2);
    piStack_4c = &uStack_24;
    uStack_50 = 0xf54ef296;
    piStack_58 = (int *)0x2a6e54;
    (**(code **)(*unaff_EDI + 0x24))();
    piStack_58 = (int *)0x0;
    uStack_5c = 4;
    ppiStack_60 = &piStack_30;
    (**(code **)(*param_2 + 0x14))(param_2);
    uStack_50 = 0;
    piStack_4c = param_2;
    piStack_48 = piStack_3c;
    (**(code **)(*piStack_3c + 0x68))(piStack_3c,&DAT_002a6990,&uStack_50);
    ppiStack_60 = (int **)0x0;
    (**(code **)(*param_2 + 0x14))(param_2,&ppiStack_60,2,0);
    if (piStack_58 != (int *)0x0) {
      (**(code **)(*piStack_58 + 8))(piStack_58);
    }
  }
  return 0;
}
