#ifndef _SHOPKEEPER_QUOTES_H_
#define _SHOPKEEPER_QUOTES_H_


// COMMON shop keeper quote enums
enum
{
	// Quotes 0-9 are generic NPC quotes common to everyone and controlled by the normal NPC Dialogue system.
	//10
	SK_QUOTES_DEALER_OFFERED_MONEY_AS_A_GIFT = 10,
	SK_QUOTES_PLAYER_FIRST_ENTERS_SKI,
	SK_QUOTES_RANDOM_QUOTE_WHILE_PLAYER_DECIDING_1,
	SK_QUOTES_RANDOM_QUOTE_WHILE_PLAYER_DECIDING_2,
	SK_QUOTES_RANDOM_QUOTE_WHILE_ITEMS_CHOSEN_TO_TRADE,
	//15
	SK_QUOTES_RANDOM_QUOTE_WHILE_ITEMS_CHOSEN_TO_SELL_OR_REPAIR,
	SK_QUOTES_PLAYER_REQUESTED_EVALUATION,
	SK_QUOTES_DURING_EVALUATION_STUFF_REJECTED,
	SK_QUOTES_EVALUATION_RESULT_VALUE_OF_ZERO,
	SK_QUOTES_EVALUATION_RESULT_SOME_REALLY_DAMAGED_ITEMS,
	//20
	SK_QUOTES_EVALUATION_RESULT_NORMAL,
	SK_QUOTES_EVAULATION_PLAYER_DOESNT_HAVE_ENOUGH_VALUE,
	SK_QUOTES_PLAYER_HAS_EXACTLY_ENOUGH_MONEY_FOR_TRANSACTION,
	SK_QUOTES_PLAYER_HAS_TOO_MUCH_MONEY_FOR_TRANSACTION,
	SK_QUOTES_PRESSES_DONE_HAS_AT_LEAST_1_TRANSACTION,
	//25
	SK_QUOTES_PRESSED_DONE_HASNT_MADE_TRANSACTION,
	SK_QUOTES_PRESSED_DONE_STILL_HAS_STUFF_IN_OFFER_AREA,
	SK_QUOTES_CANT_AFFORD_TO_BUY_OR_TOO_MUCH_TO_REPAIR,
	
#ifdef JA2UB		
	SK_QUOTES_BETTY_IS_ENEMY,
	SK_QUOTES_NPC_HEALED_BY_PC,

	//30 JA25 UB
	SK_QUOTES_DEFAULT_WHEN_FIGHTING_NEARBY,
	SK_QUOTES_FOLLOWS_QUOTE_1_POSITIVE,
	SK_QUOTES_FOLLOWS_QUOTE_1_NEGATIVE,
	SK_QUOTES_NPC_WANTS_TO_CLOSE_UP_SHOP,
	SK_QUOTES_WHEN_PLAYER_BUYS_PORNO,

	//35
	SK_QUOTES_INTRO_TO_TEX,
	SK_QUOTES_INTRO_TO_TEX_FOLLOW_UP_1,
	SK_QUOTES_INTRO_TO_TEX_FOLLOW_UP_2,
	SK_QUOTES_RANDOM_QUOTE_WHILE_PLAYER_DECIDING_3,
	SK_QUOTES_RANDOM_QUOTE_WHILE_PLAYER_DECIDING_4,

	//40
	SK_QUOTES_NPC_SPECIFIC_40,
	SK_QUOTES_NPC_SPECIFIC_41,
	SK_QUOTES_NPC_SPECIFIC_42,
	SK_QUOTES_NPC_SPECIFIC_43,
	SK_QUOTES_NPC_SPECIFIC_44,

	SK_QUOTES_NPC_SPECIFIC_45,
	SK_QUOTES_NPC_SPECIFIC_46,
	SK_QUOTES_NPC_SPECIFIC_47,
	SK_QUOTES_NPC_SPECIFIC_48,
	SK_QUOTES_NPC_SPECIFIC_49,

	SK_QUOTES_NPC_SPECIFIC_50,
	SK_QUOTES_NPC_SPECIFIC_51,
	SK_QUOTES_NPC_SPECIFIC_52,
	SK_QUOTES_NPC_SPECIFIC_53,
	SK_QUOTES_NPC_SPECIFIC_54,
#endif
	NUM_COMMON_SK_QUOTES,

	// Quotes 28+ are NPC Specific, and are not under direct control of the SKI system.	The get used by .COD files
};


// Common quotes needed by SKI
#define SK_QUOTES_NOT_INTERESTED_IN_THIS_ITEM		4

// NPC SPECIFIC shopkeeper_quotes

#define FREDO_QUOTE_CAN_RESET_IMPRINTING				31

#define FREDO_PERKO_SORRY_REPAIR_DELAYED				29

#define ARNIE_QUOTE_NOT_REPAIRED_YET						33

#endif
