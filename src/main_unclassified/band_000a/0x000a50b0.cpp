/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 126463AC49317A5021556BCE9A7600EF092E1E35C81FADA77DE8B5B88BB5B8DE
 * Entry: 0x000a50b0, Ghidra index: 1964, label: FUN_000a50b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_packed_color_sse.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
extern uint32_t DAT_003e2534;
extern uint32_t PTR_LAB_003a1ef8;
extern uint8_t _DAT_003f7c70[16];
extern uint8_t _DAT_003f7c80[16];
extern uint8_t _DAT_00469af0[16];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a50b0(undefined1 (*param_1) [16],int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int in_EDX;
  int *piVar7;
  int local_10;
  uint local_8;
  
  iVar2 = DAT_0037bb28;
  if (in_EDX != 0) {
    iVar5 = in_ECX * 0x4c;
    local_10 = in_EDX;
    do {
      /* XBE 0x000A50F3-0x000A5134: same original packed SSE lanes.
       * This is a host syntax/instruction model, not a guest-memory ABI. */
      uint32_t packed_color = bf_x86_pack_color_sse(*param_1, _DAT_003f7c70,
                                                    _DAT_00469af0, _DAT_003f7c80);
      local_8 = 0;
      if (*(int *)(&DAT_003e2534 + iVar5 + in_EAX * 0x4c4) != 0) {
        piVar7 = (int *)(&DAT_003e2534 + iVar5 + 4 + in_EAX * 0x4c4);
        do {
          iVar1 = *piVar7;
          piVar3 = (int *)(*(int *)(param_2 + 4) + param_3);
          if (iVar2 == 0) {
LAB_000a5183:
            if (piVar3 != (int *)0x0) {
              *piVar3 = ((uint)(&PTR_LAB_003a1ef8)[iVar1] & 0xfffbffff) + 0x40000;
              /* Original MOV [EAX+4],ECX stores the packed 32-bit word. */
              memcpy(piVar3 + 1, &packed_color, sizeof(packed_color));
            }
          }
          else {
            puVar4 = (undefined4 *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 0x10));
            uVar6 = *(int *)(iVar2 + 0x10) + 0x10;
            *(uint *)(iVar2 + 0x10) = uVar6;
            if (uVar6 <= *(uint *)(iVar2 + 0x14)) {
              *puVar4 = 8;
              puVar4[1] = param_3;
              piVar3 = puVar4 + 2;
              goto LAB_000a5183;
            }
          }
          local_8 = local_8 + 1;
          piVar7 = piVar7 + 1;
        } while (local_8 < *(uint *)(&DAT_003e2534 + iVar5 + in_EAX * 0x4c4));
      }
      param_1 = param_1 + 1;
      iVar5 = iVar5 + 0x4c;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
