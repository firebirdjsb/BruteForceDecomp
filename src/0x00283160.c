/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60CFA6391B1FE3EDC67726EC7E6BBBD4C3A73F721FE57ED31914C52AC1B06243
 * Entry: 0x00283160, Ghidra index: 9067, label: FUN_00283160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00283188_default[];
void FUN_00283160(void)

{
  uint *in_EAX;
  int iVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  undefined4 *puVar4;
  
  uVar3 = in_EAX[0x3d];
  switch((uint)(uVar3 == unaff_EBX) | *in_EAX & 6) {
  case 0:
    if ((uVar3 == 0x112) && (unaff_EBX == 0x212)) {
      FUN_002850d0();
      return;
    }
    FUN_00285320();
    return;
  case 1:
    iVar1 = FUN_00283110();
    (**(code **)(iVar1 * 8 + 0x3baf70))();
    return;
  case 2:
    FUN_00285320();
    return;
  case 3:
    iVar1 = FUN_00091670();
    uVar3 = in_EAX[0x3e];
    puVar4 = (undefined4 *)in_EAX[1];
    for (uVar2 = iVar1 * uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *in_ECX = *puVar4;
      puVar4 = puVar4 + 1;
      in_ECX = in_ECX + 1;
    }
    for (uVar3 = iVar1 * uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)in_ECX = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      in_ECX = (undefined4 *)((int)in_ECX + 1);
    }
    return;
  case 4:
  case 5:
    break;
  default:
    goto switchD_00283188_default;
  }
  if (uVar3 == 0x12) {
    if (unaff_EBX == 0x112) {
      FUN_00283860();
      return;
    }
    if (unaff_EBX == 0x212) {
      FUN_002835a0();
      return;
    }
LAB_0028329d:
    if (unaff_EBX == 0x2d2) {
      FUN_002847e0();
      return;
    }
  }
  else if (uVar3 == 0x112) {
    if (unaff_EBX == 0x212) {
      FUN_00283b20();
      return;
    }
    goto LAB_0028329d;
  }
  FUN_00284ae0();
switchD_00283188_default:
  return;
}
