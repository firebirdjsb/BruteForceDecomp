/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC7A4D3CE2A509B88DE59C4B5D4623CDEA076A989A0EDF6A90ADFCE5A4C04A3E
 * Entry: 0x000c9d70, Ghidra index: 2497, label: FUN_000c9d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bb9d0(int *param_1);
extern void FUN_000ca1a0(int param_1);
extern void FUN_000c9f40(undefined4 param_1);

extern uint32_t switchD_000c9dbe_default[];
void FUN_000c9d70(int param_1)

{
  byte *pbVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_000bb9d0(*(undefined4 *)(in_EAX + 100));
  *(byte *)(*(int *)(in_EAX + 100) + 0x13) = *(byte *)(*(int *)(in_EAX + 100) + 0x13) | 1;
  FUN_000bb9d0(*(undefined4 *)(in_EAX + 0x68));
  pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
  *pbVar1 = *pbVar1 | 1;
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != *(undefined4 **)(param_1 + 8)) {
    do {
      switch(*puVar2) {
      case 1:
      case 2:
        local_20 = 0x1e559d89;
        FUN_000ca1a0(in_EAX,&local_20);
        goto switchD_000c9dbe_default;
      case 3:
      case 4:
        local_1c = 0x1b162225;
        FUN_000ca1a0(in_EAX,&local_1c);
        goto switchD_000c9dbe_default;
      case 5:
        local_18 = 0xfb515609;
        FUN_000ca1a0(in_EAX,&local_18);
        goto switchD_000c9dbe_default;
      case 6:
        local_14 = 0xf48ce0dc;
        FUN_000ca1a0(in_EAX,&local_14);
        goto switchD_000c9dbe_default;
      case 7:
        local_10 = 0x1e251d69;
        FUN_000ca1a0(in_EAX,&local_10);
        goto switchD_000c9dbe_default;
      case 8:
        local_c = 0xf1b3f1aa;
        FUN_000ca1a0(in_EAX,&local_c);
        goto switchD_000c9dbe_default;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        local_8 = 0xdb49c4b;
        FUN_000ca1a0(in_EAX,&local_8);
        goto switchD_000c9dbe_default;
      case 0x12:
        local_4 = 0x1327f9ed;
        FUN_000ca1a0(in_EAX,&local_4);
        goto switchD_000c9dbe_default;
      case 0x13:
        break;
      case 0x14:
        break;
      default:
        goto switchD_000c9dbe_default;
      }
      FUN_000c9f40(unaff_ESI);
switchD_000c9dbe_default:
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 8));
  }
  return;
}
