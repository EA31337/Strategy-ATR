/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_ATR_Params_M1 : Indi_ATR_Params {
  Indi_ATR_Params_M1() : Indi_ATR_Params(indi_atr_defaults, PERIOD_M1) { shift = 0; }
} indi_atr_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_ATR_Params_M1 : StgParams {
  // Struct constructor.
  Stg_ATR_Params_M1() : StgParams(stg_atr_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = 10;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = 0;
    price_stop_method = 1;
    price_stop_level = 2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_atr_m1;
